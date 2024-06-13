#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=1; i*i<=n; i++){
        cout<<i<<" ";
    }
    /*
    Here,
    (i * i = n) => (i^2 = n) => (i = sqrt(n))
    That mean's we can say:-
    for(int i=1; i<= sqrt(n); i++){}
    So, Time complexity => O(sqrt(n))
    */
    return 0;
}