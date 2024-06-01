#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n; cin>>x>>n;
    long long int a = 0;
    for(int i=2; i<=n; i += 2){
        long long int mul = 1;
        for(int j=1; j<=i; j++){
            mul *= x;
        }
        a += mul;
    }
    cout<<a;
    return 0;
}