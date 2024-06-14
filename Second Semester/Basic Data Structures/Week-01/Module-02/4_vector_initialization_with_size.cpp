#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    //Syntax --> vector<type>vector_name(size,value)
    vector<int>a(n,5);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}