#include<bits/stdc++.h>
using namespace std;
vector<int>v[1005];
bool vis[1005];
void bfs(int src, int des){
    queue<pair<int,int>>q;
    q.push({src,0}); //source always 0th level
    vis[src] = true;
    while(!q.empty()){
        //1.Line theke ber koro:
        pair<int,int>p = q.front();
        q.pop();
        int parent = p.first;
        int level = p.second;

        //2.Jabotio kaj:
        if(parent == des)
            cout<<level<<endl;

        //Children gulo line e daw:
        for(int child: v[parent]){
            if(vis[child] == false){
                q.push({child, level+1});
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
    int src; cin>>src;
    int des; cin>>des;
    memset(vis, false, sizeof(vis));
    bfs(src,des);
    return 0;
}