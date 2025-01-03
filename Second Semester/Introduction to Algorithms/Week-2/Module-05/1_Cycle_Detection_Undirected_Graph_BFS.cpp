#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int>adj[N]; //Adjancey List
bool vis[N];
int parentArray[N];
bool ans;
void bfs(int s){
    queue<int>q;
    q.push(s);
    vis[s] = true;
    while(!q.empty()){
        int parent = q.front();
        q.pop();
        for(int child: adj[parent]){
            if(vis[child]==true && parentArray[parent] != child){
                ans = true;
            }
            if(vis[child]==false){
                parentArray[child] = parent;
                q.push(child);
                vis[child]=true;
            }
        }
    }
}
int main(){
    int n,e; cin>>n>>e;
    while(e--){
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    ans = false;
    for(int i=0; i<n; i++){
        if(vis[i]==false){
            bfs(i);
        }
    }
    if(ans == true)
        cout<<"Cycle Found"<<endl;
    else
        cout<<"Cycle Not Found"<<endl;
    return 0;
}