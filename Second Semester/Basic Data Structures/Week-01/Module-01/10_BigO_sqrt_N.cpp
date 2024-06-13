#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=1; i<=sqrt(n); i++){ //sqrt(n) times
        cout<<i<<" ";
    }
    /*
    When we iterate a loop from 0/1/anything to sqrt(n).
    In this case time complexiry => sqrt(n)
    So, Time complexity => O(sqrt(n))
    */
    return 0;
}