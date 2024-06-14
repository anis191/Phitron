#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    // using push_back:-
    vector<int> a;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        a.push_back(x);
    }
    vector<int> b(n);
    for(int i=0; i<n; i++)
        cin>>b[i];
    
    for(int i:a)
        cout<<i<<" ";
    cout<<endl;
    for(int i:b)
        cout<<i<<" ";
    return 0;
}