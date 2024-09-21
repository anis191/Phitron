#include<bits/stdc++.h>
using namespace std;
vector<int>v[1005];
bool vis[1005][1005];
char a[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n,m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
bool valid_cell(int i, int j){
    if(a[i][j] == '#')
        return false;
    return true;
}
void bfs(int ai, int aj){
    queue<pair<int,int>>q;
    q.push({ai,aj});
    vis[ai][aj] = true;
    bool found = false;
    while(!q.empty()){
        pair<int,int>p = q.front();
        q.pop();

        if(a[p.first][p.second] == 'B'){
            cout<<"YES"<<endl;
            found = true;
            break;
        }

        for (int i = 0; i < 4; i++){
        int ci = p.first + d[i].first;
        int cj = p.second + d[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false && valid_cell(ci,cj)){
            q.push({ci,cj});
            vis[ci][cj] = true;
        }
    }
    }
    if(found == false)
        cout<<"NO"<<endl;
}
int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    int ai,aj;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == 'A'){
                ai = i; aj = j;
            }else{
                continue;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    bfs(ai,aj);
    return 0;
}