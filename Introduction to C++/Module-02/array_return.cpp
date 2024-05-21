// FOR NORMAL ARRAY:---------->
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int* fun(int *a, int n){
    for(int i=0; i<5; i++){
        a[i] = 40;
    }
}
int main(){
    int a[5];
    for(int i=0; i<5; i++)
        cin>>a[i];
    int *b = fun(a,5);
    for(int i=0; i<5; i++){
        cout<< " "<<b[i];
    }
    return 0;
}