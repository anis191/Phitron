#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    for(int i=1; i<=n; i++){ // n-times
        for(int j=1; j<=m; j++){ // m-times
            cout<<i<<" "<<j<<endl;
        }
    }
    /*
    Here, Total number of operation = (n * m)
    So, Time complexity => O(n * m)
    */
    return 0;
}