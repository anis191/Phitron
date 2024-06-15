/*
Problem-1: Running Sum of an Array
Given an array nums of integers, define a running sum of the array as runningSum[i] = sum(nums[0]…nums[i]). Write a C++ program to compute the running sum of the given array and print the result.
Note: Solve this problem using function and Vector. 
*/
#include<bits/stdc++.h>
using namespace std;
void prefix_sum(int *a, int n){
    vector<int>p(n);
    p[0] = a[0];
    for(int i=1; i<n; i++){
        p[i] = a[i] + p[i-1];
    }
    for(int i=0; i<n; i++)
        cout<<p[i]<<" ";
    return;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    prefix_sum(a,n);
    return 0;
}