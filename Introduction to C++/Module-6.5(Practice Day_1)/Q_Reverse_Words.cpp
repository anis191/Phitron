#include<bits/stdc++.h>
using namespace std;
void reverse(string t){
    string a = t;
    string::iterator i;
    for(i=(a.end()-1); i>=a.begin(); i--){
        cout<<*i;
    }
    return;
}
int main(){
    string a; getline(cin,a);
    int space_control = 0;
    string t;
    stringstream ss(a);
    while(ss >> t){
        if(space_control != 0){
            cout<<" ";
        }
        reverse(t);
        space_control++;
        // cout<<" ";
    }
    return 0;
}