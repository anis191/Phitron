#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++) // n-times
        cin>>a[i];
    for(int i=0; i<m; i++) // m-times
        cin>>b[i];

    for(int i=0; i<n; i++) // n-times
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0; i<m; i++) // m-times
        cout<<b[i]<<" ";
    /*
    Here, Total number of operation=(n + m + n + m)
    So, Time complexity => O(n+m+n+m) => O(2n + 2m) => O(n+m)
    */
    return 0;
}