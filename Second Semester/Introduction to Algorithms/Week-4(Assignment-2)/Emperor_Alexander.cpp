#include <bits/stdc++.h>
using namespace std;
const int N =1e5 +5;
int parent[N];
int group_size[N];
void dsu_initialize(int n){
    for(int i=0; i<n; i++){
        parent[i] = -1;
        group_size[i] = 1;
    }
}
int dsu_find(int node){
    if(parent[node] ==-1)
        return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}
void dsu_union_by_size(int node1,int node2){
    int leaderA =dsu_find(node1);
    int leaderB =dsu_find(node2);
    if(leaderA != leaderB){
        if (group_size[leaderA] > group_size[leaderB]){
            parent[leaderB] = leaderA;
            group_size[leaderA] += group_size[leaderB];
        }else{
            parent[leaderA] = leaderB;
            group_size[leaderB] += group_size[leaderA];
        }
    }
}
class Edge{
public:
    int u,v;
    long long w;
    Edge(int u,int v,long long w){
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
bool cmp(Edge a,Edge b){
    return a.w < b.w;
}
int main(){
    int n,e; cin>>n>>e;
    dsu_initialize(n+1);
    vector<Edge>elist;
    while(e--){
        int u,v;
        long long w; cin>>u>>v>>w;
        elist.push_back(Edge(u,v,w));
    }
    sort(elist.begin(), elist.end(), cmp);
    long long total =0;
    int useedge = 0,k = 0;
    for(Edge ed: elist){
        int leaderU = dsu_find(ed.u);
        int leaderV = dsu_find(ed.v);        
        if(leaderU == leaderV){
            k++;
        }else{
            dsu_union_by_size(ed.u,ed.v);
            total += ed.w;
            useedge++;
        }
    }
    if(useedge ==n-1){
        cout<<k<<" "<<total<<endl;
    }else{
        cout<<"Not Possible"<<endl;
    }
    return 0;
}