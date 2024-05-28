#include<bits/stdc++.h>
using namespace std;
int main(){
    string a; getline(cin,a);
    stringstream ss;
    ss << a;
    string b;
    while(ss >> b){
        cout<<b<<endl;
    }
    return 0;
}