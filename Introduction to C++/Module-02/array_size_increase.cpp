#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"The array is:"<<endl;
    for(int i=0; i<n; i++)
        cout<<" "<<a[i];
    cout<<"\nAfter increase size: "<<endl;
    int *b = new int[n];
    for(int i=0; i<n; i++)
        b[i] = a[i];
    delete[] a;
    a = new int[n+3];
    for(int i=0; i<n; i++)
        a[i] = b[i];
    delete[] b;
    for(int i=n; i<(n+3); i++)
        a[i] = 5;
    for(int i=0; i<(n+3); i++)
        cout<<" "<<a[i];
    delete[] a;
    return 0;
}