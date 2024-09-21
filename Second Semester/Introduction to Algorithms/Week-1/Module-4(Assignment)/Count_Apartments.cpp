#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>d ={{0,1},{0,-1},{-1,0},{1,0}};
bool vis[1005][1005];
char a[1005][1005];
int n,m;
bool valid(int i,int j){
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
bool valid_cell(int i, int j){
    if(a[i][j] == '#')
        return false;
    return true;
}
void bfs(int si, int sj){
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    while(!q.empty()){
        pair<int,int>p = q.front();
        q.pop();
        
        for(int i=0; i<4; i++){
            int ci = p.first + d[i].first;
            int cj = p.second + d[i].second;
            if(valid(ci,cj) && vis[ci][cj]==false && valid_cell(ci,cj)){
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
}

int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    int ap=0;
    memset(vis, false, sizeof(vis));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]== '.' && vis[i][j]==false){
                bfs(i,j);
                ap++;
            }
        }
    }
    cout<<ap<<endl;
    return 0;
}
