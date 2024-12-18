#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int>adj[N];
bool vis[N];
bool pathVisit[N];
bool ans;
void dfs(int s){
    vis[s]= true;
    pathVisit[s]=true;
    for(int child: adj[s]){
        if(pathVisit[child]==true){
            ans = true;
        }
        if(pathVisit[child]==false){
            dfs(child);
        }
    }
    pathVisit[s]=false;
}
int main(){
    int n,e; cin>>n>>e;
    while(e--){
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
    }
    memset(vis, false, sizeof(vis));
    memset(pathVisit, false, sizeof(pathVisit));
    ans = false;
    for(int i=0; i<n; i++){
        if(vis[i] == false){
            dfs(i);
        }
    }
    if(ans==true)
        cout<<"Cycle Found"<<endl;
    else
        cout<<"Cycle Not Found"<<endl;
    return 0;
}