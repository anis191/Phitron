#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
char a[1005][1005];
bool vis[1005][1005];
int n,m;
bool valid(int i,int j){
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
int bfs(int si,int sj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj] =true;

    int ar = 0;
    while(!q.empty()){
        pair<int,int>p = q.front();
        q.pop();
        ar++;
        for(int i=0; i<4; i++){
            int ci = p.first + d[i].first;
            int cj = p.second + d[i].second;
            if(valid(ci,cj)==true && vis[ci][cj]==false && a[ci][cj] == '.'){
                q.push({ci,cj});
                vis[ci][cj] = true;
            }
        }
    }
    return ar;
}
int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    int mn_ar = INT_MAX;
    bool check = false;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] =='.' && vis[i][j]==false){
                int ar =bfs(i,j);
                mn_ar = min(mn_ar,ar);
                check = true;
            }
        }
    }
    if(check==false){
        cout<<-1<<endl;
    }else{
        cout<<mn_ar<<endl;
    }
    return 0;
}