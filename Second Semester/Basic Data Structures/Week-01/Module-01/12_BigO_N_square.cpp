#include<bits/stdc++.h>
using namespace std;
int main(){
    // n^2(n_square) is a time complexity for nested loops.
    int n; cin>>n;
    for(int i=1; i<=n; i++){ // n-times
        for(int j=1; j<=n; j++){ // n-times
            cout<<j<<" ";
        }
        cout<<endl;
    }
    /*
    Here, Total number of operation = (n * n)
    So, Time complexity => O(n * n) => O(n^2)
    */
    return 0;
}