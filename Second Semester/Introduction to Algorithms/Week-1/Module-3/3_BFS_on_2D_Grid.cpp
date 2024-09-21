#include<bits/stdc++.h>
using namespace std;
vector<int>v[1005];
bool vis[20][20];
char a[20][20];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n,m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void bfs(int si, int sj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj] = true;
    while(!q.empty()){
        //1.Line theke ber koro:
        pair<int,int>p = q.front();
        q.pop();

        //2.Jabotio kaj:
        cout<<p.first<<" "<<p.second<<endl;

        //Children gulo line e daw:
        for (int i = 0; i < 4; i++)
    {
        int ci = p.first + d[i].first;
        int cj = p.second + d[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false)
        {
            q.push({ci,cj});
            vis[ci][cj] = true;
        }
    }
    }
}
int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    bfs(si,sj);
    return 0;
}