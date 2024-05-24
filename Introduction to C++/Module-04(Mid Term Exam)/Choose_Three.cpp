#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int test=1; test<=t; test++){
        int n,s;
        cin>>n>>s;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int no = 0;
        for(int i=0; i<(n-2); i++){
            for(int j=i+1; j<(n-1); j++){
                for(int k=j+1; k<n; k++){
                    if((a[i]+a[j]+a[k]) == s){
                        cout<<"YES"<<endl;
                        no++;
                        break;
                    }
                }
                if(no != 0){
                    break;
                }
            }
            if(no != 0){
                break;
            }
        }
        if(no == 0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}