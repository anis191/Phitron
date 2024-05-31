#include<bits/stdc++.h>
using namespace std;
int main(){
    string a; getline(cin,a);
    int count = 0;
    stringstream ss(a);
    string i;
    while(ss >> i){
        for(char j:i){
            if(j>=65 && j<=90 || j>=97 && j<=122){
                count++;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}