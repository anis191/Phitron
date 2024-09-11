#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int tc=1; tc<=t; tc++){
        int n; cin>>n;
        list<int>l;
        for(int i=0; i<n; i++){
            int val; cin>>val;
            l.push_back(val);
        }
        l.sort();
        l.unique();
        for(int i: l)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}