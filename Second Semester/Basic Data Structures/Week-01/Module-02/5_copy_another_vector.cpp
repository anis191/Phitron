#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a(5,3);
    for(int i=0; i<5; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    vector<int>b(a);
    for(int i=0; i<5; i++)
        cout<<b[i]<<" ";
    return 0;
}