#include<bits/stdc++.h>
using namespace std;
void func(int n, char ch){
    for(int i=0; i<n; i++)
        cout<<ch<<" ";
    cout<<endl;
    return;
}
int main(){
    int t; cin>>t;
    for(int i=1; i<=t; i++){
    int n;
    char ch; cin>>n>>ch;
    func(n,ch);
    }
    return 0;
}