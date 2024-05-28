#include<bits/stdc++.h>
using namespace std;
int main(){
    // point 0th/1st index --> .begin();
    string a; cin>>a; cout<<a<<endl;
    cout<<*a.begin()<<endl;
    // point n_th/last+ index --> .end();
    cout<<*(a.end()-1)<<endl;
    return 0;
}