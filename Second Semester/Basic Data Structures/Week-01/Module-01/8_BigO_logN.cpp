#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) // n-times
        cin>>a[i];
    for(int i=0; i<n; i++) // n-times
        cout<<a[i]<<" ";
    cout<<endl;

    for(int i=1; i<n; i *=3){ // log(n)
        cout<<i<<" ";
    }
    /*
    Here, Total number of operation = (n + n + log n)
    So, Time complexity => O(n+n+log(n)) => O(2n + log(n)) => O(n+log(n)) => O(n) [n > log(n)]
    */
    return 0;
}