#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    bool check = false;
    for(int i=0; i<(n-1); i++){
        int x = a[i];
        int l = i+1, r=(n-1);
        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid] == x){
                cout<<"YES";
                check = true;
                break;
            }else if(x>a[mid]){
                l = mid + 1;
            }else{
                r = mid -1;
            }
        }
        if(check == true)
            break;
    }
    if(check == false)
        cout<<"NO";
    return 0;
}