#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int test=1; test<=t; test++){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        vector<int>v(a,a+n);
        sort(a,a+n);
        bool yes = true;
        for(int i=0; i<n; i++){
            if(v[i] != a[i]){
                cout<<"NO"<<endl;
                yes = false;
                break;
            }
        }
        if(yes == true)
            cout<<"YES"<<endl;
    }
    return 0;
}