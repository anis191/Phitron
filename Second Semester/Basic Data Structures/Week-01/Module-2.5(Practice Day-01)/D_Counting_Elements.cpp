//Solve using vector and built in functions
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    int count = 0;
    for(int i=0; i<n; i++){
        int k = v[i]+1;
        vector<int>::iterator it;
        it = find(v.begin(), v.end(), k);
        if(it == v.end())
            continue;
        else
            count++;
    }
    cout<<count<<endl;
    return 0;
}