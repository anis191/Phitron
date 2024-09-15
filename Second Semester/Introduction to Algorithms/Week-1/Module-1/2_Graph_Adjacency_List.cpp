#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e; cin>>n>>e;
    vector<int> arr[n];
    while(e--){
        int a,b; cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    //Check:
    for(int i: arr[5]){
        cout<<i<<" ";
    }
    return 0;
}