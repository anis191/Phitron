#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>v = {1,2,3,4,5};
    for(int i=0; i<v.size(); i++)
        cout<<v[i];
    cout<<endl;
    v.resize(3);
    for(int i=0; i<v.size(); i++)
        cout<<v[i];
    cout<<endl;
    
    v.resize(10, 5);
    for(int i=0; i<v.size(); i++)
        cout<<v[i];
    return 0;
}