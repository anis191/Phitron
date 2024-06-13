#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=1; i<n; i *=2){ // increment 'i' with '*=k'
        cout<<i<<" ";
        /*
        When we increment/dicrement the loop controler variable with multiply(*) anything, in this case time complexity is "log(N)"
        So, Time complexity => O(log n)
        */
    }
    return 0;
}