#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=1; i<=50; i++){ //For worst case--> 50-times run
        if(i == n){
            cout<<n<<" found!";
            break;
        }else{
            continue;
        }
    }
    for(int i=0; i<n; i++){ // n-times
        if(i % 2== 0){
            cout<<"even"<<endl;
        }
    }
    for(int i=0; i<(n*n); i++){ // n^2 -times
        if(i % 10 == 0){
            cout<<i<<" ";
        }
    }
    /*
    Here, Total number of operation = 50 + n + n^2
    So, Time complexity => O(50+n+n^2) => O(n+n^2) => O(n^2) [here, n^2 > n]
    */
    return 0;
}