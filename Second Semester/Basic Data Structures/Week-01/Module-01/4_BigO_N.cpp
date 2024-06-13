#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=1; i<=n; i +=2){ //This loop will run (n/2) times.Because we increment 'i' with '+=2' in every iteration.
        cout<<i<<endl;
    }
    /*
    Here, Total number of operation = n/2
    So, Time complexity => O(n/2) => O(n)
    */
    return 0;
}