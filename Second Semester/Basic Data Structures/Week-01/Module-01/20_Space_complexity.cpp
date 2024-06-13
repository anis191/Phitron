#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n]; //space = n 
    int b[n*n]; //space = (n*n)
    /*
    Here, Total used space = (n + (n*n))
    So, Space complexity => O(n+(n*n)) => O(n + n^2) => O(n^2) [n^2 > n]
    */
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<(n*n); i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0; i<(n*n); i++)
        cout<<b[i]<<" ";
    return 0;
}