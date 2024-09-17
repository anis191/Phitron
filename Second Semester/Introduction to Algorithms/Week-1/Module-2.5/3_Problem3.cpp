#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
bool vis[1000];
void bfs(int src, int node){
    queue<int>q;
    q.push(src);
    vis[src]=true;
    while(!q.empty()){
        int p = q.front();
        q.pop();

        if(p == node){
            cout<<v[p].size();
            return;
        }

        for(int child : v[p]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
            }
        }
    }
}
int main(){
    int n,e; cin>>n>>e;
    while(e--){
        int a,b; cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int node; cin>>node;
    memset(vis, false, sizeof(vis));
    bfs(0,node);
    return 0;
}