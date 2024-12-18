#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
bool vis[1000];
void bfs(int src, int l){
    queue<pair<int,int>>q;
    q.push({src,0});
    vis[src]=true;
    vector<int>ans;
    while(!q.empty()){
        pair<int,int>p = q.front();
        q.pop();
        int parent = p.first;
        int level = p.second;

        if(l == level){
            ans.push_back(parent);
        }

        for(int child: v[parent]){
            if(!vis[child]){
                q.push({child,level+1});
                vis[child] = true;
            }
        }
    }
    sort(ans.begin(), ans.end(), greater<int>());
    for(int i: ans)
        cout<<i<<" ";
}
int main(){
    int n,e; cin>>n>>e;
    while(e--){
        int a,b; cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int l; cin>>l;
    memset(vis, false, sizeof(vis));
    bfs(0,l);
    return 0;
}