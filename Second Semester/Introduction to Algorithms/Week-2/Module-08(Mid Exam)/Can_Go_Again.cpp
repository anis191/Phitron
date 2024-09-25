#include <bits/stdc++.h>
using namespace std;
class Edge{
public:
    int u,v;
    long long c;
    Edge(int u,int v, long long c){
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const long long N = 1e9+5;
long long dis[1005];
int main(){
    int n,e; cin>>n>>e;
    vector<Edge>EdgeList;
    while(e--){
        int u,v;
        long long c;
        cin>>u>>v>>c;
        EdgeList.push_back(Edge(u,v,c));
    }
    int s; cin>>s;
    for(int i=1; i<=n; i++){
        dis[i] =N;
    }
    dis[s]=0;
    bool k;
    for(int i=1; i<=n-1; i++){
        k = false;
        for (Edge ed : EdgeList){
            int u = ed.u;
            int v = ed.v;
            long long c = ed.c;
            if(dis[u] < N && dis[u]+c < dis[v]){
                dis[v] = dis[u]+ c;
                k=true;
            }
        }
        if(k==false)
            break;
    }
    bool nc = false;
    for(Edge ed :EdgeList){
        int u = ed.u;
        int v = ed.v;
        long long c = ed.c;
        if(dis[u] < N && dis[u] + c < dis[v]){
            nc =true;
            break;
        }
    }
    if(nc==true){
        cout<<"Negative Cycle Detected"<<endl;
        return 0;
    }
    int t; cin>>t;
    while(t--){
        int d; cin>>d;
        if(dis[d] == N){
            cout<<"Not Possible"<<endl;
        }else{
            cout<<dis[d]<<endl;
        }
    }
    return 0;
}