#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    while(n > 0){
        int digit = n % 10;
        cout<<digit<<endl;
        n = n / 10;
    }
    /*
    In this code, we control the loop with "n".And also change the value of "n" with division.
    ***When we change the value of loop controlar variable with division, in this case the time complexity is "log(n)"
    So, Time complexity is => O(log(n))
    */
    return 0;
}