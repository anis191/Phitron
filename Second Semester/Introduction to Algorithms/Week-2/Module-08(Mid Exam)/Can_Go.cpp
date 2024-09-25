#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v[1005];
int dis[1005];
class cmp {
public:
    bool operator()(pair<int,int>a,pair<int,int>b){
        return a.second > b.second;
    }
};
void dijkstra(int src,int n){
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
    pq.push({src,0});
    dis[src] = 0;
    while(!pq.empty()){
        pair<int,int>p =pq.top();
        pq.pop();
        int node = p.first;
        int cost = p.second;
        if(cost > dis[node])
            continue;
        for(pair<int,int>child : v[node]){
            int childNode = child.first;
            int childCost = child.second;
            if(cost+childCost < dis[childNode]){
                dis[childNode] = cost+childCost;
                pq.push({childNode,dis[childNode]});
            }
        }
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    for(int i=1; i<=n; i++) {
        v[i].clear();
    }
    while(e--){
        int a,b,w;
        cin>>a>>b>>w;
        v[a].push_back({b,w});
    }
    int s; cin>>s;
    for(int i=1; i<=n; i++){
        dis[i] =INT_MAX;
    }
    dijkstra(s,n);
    int t; cin>>t;
    while(t--){
        int d,dw; cin>>d>>dw;
        if(dis[d]==INT_MAX || dis[d]>dw){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
