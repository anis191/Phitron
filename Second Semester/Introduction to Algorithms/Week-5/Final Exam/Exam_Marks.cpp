#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int test=0; test<t; test++){
        int n,m; cin>>n>>m;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int s = 1000-m;
        if(s <= 0){
            cout<<"YES"<<endl;
            continue;
        }
        bool dp[n+1][s+1];
        dp[0][0] =true;
        for(int i=1; i<=s; i++)
            dp[0][i] =false;
        for(int i=1; i<=n; i++){
            for(int j=0; j<=s; j++){
                if(arr[i-1] <= j){
                    dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        if(dp[n][s]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}