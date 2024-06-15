// Normal Way:-
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q; cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    long long int sum = 0;
    while(q--){
        int l,r; cin>>l>>r;
        l--; r--;
        long long int sum = 0;
        for(int i=l; i<=r; i++)
            sum += a[i];
        cout<<sum<<endl;
    }
    return 0;
}