#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n]; //space = n 
    int b[n]; //space = n
    /*
    Here, Total used space = (n + n)
    So, Space complexity => O(n+n) => O(2n) => O(n)
    */
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0; i<n; i++)
        cout<<b[i]<<" ";
    return 0;
}