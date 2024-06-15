// Optimize Way:-
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,q; cin>>n>>q;
    long long int a[n];
    for(int i=0; i<n; i++)  //n-times
        cin>>a[i];
    long long int p[n];
    p[0] = a[0];
    for(int i=1; i<n; i++)  //n-times
        p[i] = a[i] + p[i-1];
    while(q--){    //q-times
        int l,r; cin>>l>>r;
        l--;r--;
        long long int sum;
        if(l == 0){
            sum = p[r];
        }else{
            sum = p[r] - p[l-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}
/*
Time complexity = O(n+n+q) =>O(2n+q) =>O(n+q) =>O(10^5 + 10^5) =>O(2.10^5)
Here, O(10^5) < O(10^7)
*/