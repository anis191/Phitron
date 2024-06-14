#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<v.size()<<endl;
    return 0;
}