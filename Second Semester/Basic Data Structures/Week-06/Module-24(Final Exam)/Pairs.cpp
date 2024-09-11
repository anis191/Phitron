#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int>i, pair<string, int>j){
    if(i.first < j.first){
        return true;
    } 
    else if(i.first > j.first){
        return false;
    } 
    else{
        return i.second > j.second;
    }
}
int main(){
    int n; cin>>n;
    list<pair<string, int>>a;
    for(int i=0; i<n; i++){
        string s;
        int x;
        cin>>s>>x;
        a.push_back({s,x});
    }
    a.sort(cmp);
    for(pair<string, int>pr: a){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}