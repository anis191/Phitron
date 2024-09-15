#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<pair<int,string>>v;
    for(int i=0; i<n; i++){
        int id;
        string name;
        cin>>id>>name;
        v.push_back({id,name});
    }
    for(pair<int,string>pr: v){
        cout<<pr.first<<"-->"<<pr.second<<endl;
    }
    return 0;
}