/*
Problem-3: Search Query
WAP that takes an array of size n and q queries as input. For each query you will be given a number. For each query you have to print ‘YES’ if the number is present in the array, otherwise print ‘No’. Solve the problem in O((n+q)*logn)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    int q; cin>>q;
    while(q--){
        int x; cin>>x;
        int l=0,r=(n-1);
        bool checker = false;
        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid] == x){
                cout<<"YES"<<endl;
                checker = true;
                break;
            }else if(x > a[mid]){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        if(checker == false)
            cout<<"NO"<<endl;
    }
    return 0;
}