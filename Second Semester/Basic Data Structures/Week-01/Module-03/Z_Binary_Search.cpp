#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q; cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    // int l = 0, r=(n-1);
    sort(a,a+n);
    while(q--){
        int x; cin>>x;
        int l = 0, r=(n-1);
        bool checker = false;
        while(l <= r){
        int mid = (l+r)/2;
        // bool checker = false;
        if(a[mid] == x){
            cout<<"found"<<endl;
            checker = true;
            break;
        }else if(x > a[mid]){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
        /*if(checker == false)
            cout<<"not found"<<endl;*/
        }
        if(checker == false)
            cout<<"not found"<<endl;
    }
    return 0;
}