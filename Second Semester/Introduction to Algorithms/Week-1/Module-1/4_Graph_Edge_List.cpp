#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e; cin>>n>>e;
    vector<pair<int,int>>v;
    while(e--){
        int a,b; cin>>a>>b;
        v.push_back({a,b});
    }
    for(pair<int,int>pr: v){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}