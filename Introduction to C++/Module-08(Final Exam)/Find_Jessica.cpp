#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    stringstream ss(a);
    string i;
    int f=0;
    while(ss >> i){
        if(i == "Jessica"){
            cout<<"YES";
            f++;
            break;
        }
    }
    if(f == 0)
        cout<<"NO";
    return 0;
}