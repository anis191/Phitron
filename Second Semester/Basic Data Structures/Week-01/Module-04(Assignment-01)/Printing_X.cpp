#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    char a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==floor(n/2) && j==floor(n/2)){
                a[i][j] = 'X';
            }else if(i == j){
                a[i][j] = '\\';
            }else if((i+j) == (n-1)){
                a[i][j] = '//';
            }else{
                a[i][j] = ' ';
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}