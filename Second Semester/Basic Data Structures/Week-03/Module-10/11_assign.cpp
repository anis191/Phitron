#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>myList={10,20,30,40,50};
    list<int> a;
    a = myList;
    for(int i: a){
        cout<<i<<" ";
    }

    cout<<endl;
    list<int> b;
    b.assign(myList.begin(), myList.end());
    for(int i: a){
        cout<<i<<" ";
    }
}