#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<string> v;
    for(int i=0; i<n; i++){
        string x;
        cin>>x;
        v.push_back(x);
    }
    for(string i: v)
        cout<<i<<endl;
    return 0;
}