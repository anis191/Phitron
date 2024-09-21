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
bool valid_cell(int i, int j) {
    if(a[i][j] == '.')
        return true;
    return false;
}
int bfs(int si, int sj) {
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj] = true;
    int cr = 0;

    while (!q.empty()){
        pair<int,int>p = q.front();
        q.pop();
        cr++;
        for(int i=0; i<4; i++){
            int ci = p.first + d[i].first;
            int cj = p.second + d[i].second;
            if(valid(ci,cj)==true && vis[ci][cj]==false && valid_cell(ci,cj)==true){
                q.push({ci,cj});
                vis[ci][cj] = true;
            }
        }
    }
    return cr;
}
int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    vector<int>r;
    memset(vis, false, sizeof(vis));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]== '.' && vis[i][j]==false){
                int room = bfs(i,j);
                r.push_back(room);
            }
        }
    }
    if(r.empty()){
        cout<<0<<endl;
    }else{
        sort(r.begin(), r.end());
        for(int c: r){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}
