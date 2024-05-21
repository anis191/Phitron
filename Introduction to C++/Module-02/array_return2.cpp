// FOR DYNAMIC ARRAY:---------->
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int* fun(int *a, int n){
    int *dy = new int[n]; //we return this dynamic array
    for(int i=0; i<5; i++){
        if(i <= 3){
            dy[i] = a[i];
        }else{
            dy[i] = 2314;   
        }
    }
    return dy;
}
int main(){
    int a[5];
    for(int i=0; i<5; i++)
        cin>>a[i];
    int *b = fun(a,5);
    for(int i=0; i<5; i++){
        cout<< " "<<b[i];
    }
    delete[] b;
    cout<<"\n";
    for(int i=0; i<5; i++)
        cout<<" "<<b[i];
    return 0;
}