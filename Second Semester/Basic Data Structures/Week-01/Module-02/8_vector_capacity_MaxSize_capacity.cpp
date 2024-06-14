#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>v;
    cout<<v.max_size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(1);
    cout<<v.capacity()<<endl;

    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<v.capacity()<<endl;
    return 0;
}