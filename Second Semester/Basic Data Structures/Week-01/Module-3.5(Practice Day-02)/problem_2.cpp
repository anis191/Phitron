/*
Problem 2: Equilibrium Index
 Given an array of integers, find the equilibrium index. An equilibrium index is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    vector<int>p(n);
    p[0] = a[0];
    for(int i=1; i<n; i++){
        p[i] = a[i] + p[i-1];
    }
    for(int i=0; i<n; i++){
        int mid = i;
        if(mid == 0){
        int left_sum = 0;
        int right_sum = p[n-1] - p[0];
        if(left_sum == right_sum){
            cout<<i<<endl;
            break;
        }
        }else{
        int left_sum = p[mid-1];
        int right_sum = p[n-1] - p[mid];
        if(left_sum == right_sum){
            cout<<i<<endl;
            break;
        }
        }
    }
    return 0;
}