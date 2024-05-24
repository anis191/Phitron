#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        b[i] = a[i];
    int i=0;
    int j=n-1;
    int temp = 0;
    while(i < j){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    int no = 0;
    for(int i=0; i<n; i++){
        if(a[i] != b[i]){
            cout<<"NO";
            no++;
            break;
        }
    }
    if(no == 0){
        cout<<"YES";
    }
    return 0;
}