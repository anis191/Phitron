#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=1; i<=n; i++){ // n-times
        int num = i;
        while(num > 0){ // log(n)-times
            int digit = num % 10;
            cout<<digit<<" ";
            num = num / 10;
        }
        cout<<endl;
    }
    /*
    Here, Total number of operation = (n * log(n))
    So, Time complexity => O(n * log(n)) => O(n log(n))
    */
    return 0;
}