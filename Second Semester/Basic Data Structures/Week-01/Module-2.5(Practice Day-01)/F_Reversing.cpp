#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    vector<int>::iterator i;
    for(i=(v.end()-1); i>=v.begin(); i--){
        cout<<*i<<" ";
    }
    return 0;
}