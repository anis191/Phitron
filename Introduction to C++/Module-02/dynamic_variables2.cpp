#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int *a = new int[3];
    for(int i=0; i<3; i++)
        cin>>a[i];
    for(int i=0; i<3; i++)
        cout<<" "<< a[i];
    delete[] a;
    cout<<"\nAfter delete: "<<endl;
    for(int i=0; i<3; i++)
        cout<<" "<<a[i];
    return 0;
}