#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) // n-times
        cin>>a[i];
    for(int i=0; i<n; i++) // n-times
        cout<<a[i]<<" ";
    /*
    Here, Total number of operation = n + n
    So, Time complexity => O(n+n) => O(2n) => O(n)
    */
    return 0;
}