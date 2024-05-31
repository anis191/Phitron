#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int test=1; test<=t; test++){
        int n; cin>>n;
        char a[n+1]; cin>>a;
        int count[26];
        for(int i=0; i<26; i++)
            count[i] = 0;
        for(int i=0; i<n; i++)
            count[a[i] - 65]++;
        int ballon=0;
        for(int i=0; i<26; i++){
            if(count[i] != 0){
                if(count[i] > 1){
                    ballon += (count[i] + 1);
                }else{
                    ballon += 2;
                }
            }
        }
        cout<<ballon<<endl;
    }
    return 0;
}