#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {1,2,3,4,5,6};
    vector<char>b ={'a','b'};
    vector<int>c;

    cout<<"size of a: "<<a.size()<<endl;
    for(int i=0; i<a.size(); i++)
        cout<<a[i]<<" ";
    cout<<endl;
    a.clear();
    cout<<"size of a: "<<a.size()<<endl;
    for(int i=0; i<a.size(); i++)
        cout<<a[i]<<" ";
    
    cout<<a.empty()<<endl;
    cout<<b.empty()<<endl;
    cout<<c.empty()<<endl;

    b.clear();
    cout<<b.empty()<<endl;
    return 0;
}