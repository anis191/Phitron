#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    /*
    Big O() Notation calculate rules:-
    1.Just calculate for loops.
    2.Just calculate number of total operation/steps.
    3.Always calculate total number of operation for **"worst case".
    4.Big O(number of total operation).
    5.Ignore the constant values.
    */

    for(int i=1; i<=2*n; i++){ //Run-->(2*n) times
        cout<<i<<" ";
    }
    /*
    Here, Total number of operation = 2*n
    so, Time complexity = O(t.n.o) => O(2*n) => O(2n) => O(n)
    */
    return 0;
}