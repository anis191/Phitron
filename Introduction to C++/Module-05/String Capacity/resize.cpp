#include<bits/stdc++.h>
using namespace std;
int main(){
    string a; cin>>a;
    cout<<a<<"\nsize:-"<<a.size()<<endl;
    a.resize(5);
    cout<<a<<"\nsize:-"<<a.size()<<endl;
    a.resize(10,'z');
    cout<<a<<"\nsize:-"<<a.size()<<endl;
    return 0;
}