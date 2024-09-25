#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>d ={{0,1},{0,-1},{-1,0},{1,0}};
int n,m;
char a[1005][1005];
bool vis[1005][1005];
bool valid(int i,int j){
    if(i >= 0 && i < n && j >= 0 && j < m)
        return true;
    return false;
}
bool valid_cell(int i,int j){
    if(a[i][j]=='.')
        return true;
    return false;
}
bool bfs(int si,int sj,int di,int dj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj] =true;

    while(!q.empty()){
        pair<int,int>p =q.front();
        q.pop();
        int ci = p.first;
        int cj = p.second;
        if(ci==di && cj==dj){
            return true;
        }
        for(pair<int,int>b : d){
            int i = ci + b.first;
            int j = cj + b.second;
            if(valid(i,j)==true && vis[i][j]==false && valid_cell(i,j)==true){
                q.push({i,j});
                vis[i][j] =true;
            }
        }
    }
    return false;
}
int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    int si,sj,di,dj;
    cin>>si>>sj>>di>>dj;
    memset(vis, false, sizeof(vis));
    bool ans = bfs(si,sj,di,dj);
    if(ans == true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
