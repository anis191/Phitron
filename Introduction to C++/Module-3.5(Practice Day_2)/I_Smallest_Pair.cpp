// Solve baki !!!!
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int test=1; test<=t; test++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int pair = 0, mn = 0;
        for(int i=1; i<(n); i++){
            for(int j=i+1; j<=n; j++){
                pair = a[i-1]+a[j-1]+j-i;
                if(i == 1 && j == 2){
                    mn = pair;
                }else{
                    mn = min(mn,pair);
                }
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}