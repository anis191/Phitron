#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={1,2,2,4,5,2,7,2,9,2};
    replace(a.begin(), a.end(), 2, -2);
    for(int i:a)
        cout<<i<<" ";
    cout<<endl;

    vector<int>b={1,2,3,2,4,2,4,2,7,2,9,2,3};
    replace(b.begin(), b.begin()+6, 2, -5);
    for(int i:b)
        cout<<i<<" ";
    return 0;
}