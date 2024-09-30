#include <bits/stdc++.h>
using namespace std;

bool vis[1000][1000];
int dis[1000][1000];
pair<int, int> parent[1000][1000]; // To store parent nodes for path reconstruction
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; // right, left, up, down (in given order)
int n, m;
char maze[1000][1000];

bool valid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m || maze[i][j] == '#' || vis[i][j])
        return false;
    return true;
}

void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    parent[si][sj] = {-1, -1}; // Mark starting point's parent as invalid

    while (!q.empty()) {
        pair<int, int> par = q.front();
        int x = par.first, y = par.second;
        q.pop();

        // If we reach the destination 'D', stop BFS
        if (maze[x][y] == 'D') {
            // Mark the path with 'X' by backtracking using the parent array
            pair<int, int> cur = {x, y};
            while (cur != make_pair(si, sj)) {
                maze[cur.first][cur.second] = 'X';
                cur = parent[cur.first][cur.second];
            }
            return; // Do not mark the starting position with 'X'
        }

        for (int i = 0; i < 4; i++) {
            int ci = x + d[i].first;
            int cj = y + d[i].second;
            if (valid(ci, cj)) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[x][y] + 1;
                parent[ci][cj] = {x, y}; // Set parent for path reconstruction
            }
        }
    }
}

int main() {
    cin >> n >> m;
    int si, sj;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> maze[i][j];
            if (maze[i][j] == 'R') { // Starting point
                si = i;
                sj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(si, sj);

    // Output the final maze
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << maze[i][j];
        }
        cout << endl;
    }

    return 0;
}
