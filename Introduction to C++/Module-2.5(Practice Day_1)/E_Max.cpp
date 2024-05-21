#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int mx = a[0];
    for(int j=1; j<n; j++){
        if(mx < a[j]){
            mx = a[j];
        }
    }
    cout<<mx;
    return 0;
}