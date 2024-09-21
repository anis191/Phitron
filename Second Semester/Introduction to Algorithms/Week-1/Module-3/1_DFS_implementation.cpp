#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> arr[N];
bool vis[N];
void dfs(int src){
    //Jabotio kaj:
    cout<<src<<endl;
    
    //visit nodes track kora:
    vis[src] = true;

    //children gulo print kora:
    for(int child: arr[src]){
        if(vis[child] == false){
            dfs(child);
        }
    }
}
int main(){
    int n,e; cin>>n>>e;
    while(e--){
        int a,b; cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    dfs(0);
    return 0;
}