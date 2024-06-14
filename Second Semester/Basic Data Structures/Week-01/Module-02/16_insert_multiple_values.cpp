#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a = {1,2,3};
    vector<int> b = {10,20,30};
    a.insert(a.begin()+1, b.begin(), b.end());
    for(int i:a)
        cout<<i<<" ";
    return 0;
}