#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c[26];
    for(int i=0; i<26; i++)
        c[i] = 0;
    for(int i=0; i<n; i++){
        char a;
        cin>>a;
        c[a-97]++;
    }
    for(int i=0; i<26; i++){
        if(c[i] != 0){
            for(int j=1; j<=c[i]; j++){
                cout<<char(i+97);
            }
        }
    }
    return 0;
}