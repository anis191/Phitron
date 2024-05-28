#include<bits/stdc++.h>
using namespace std;
int main(){
    string a; cin>>a;
    string::iterator i;
    for(i=a.begin(); i<a.end(); i++){
        cout<<*i<<"\n";
    }
    return 0;
}