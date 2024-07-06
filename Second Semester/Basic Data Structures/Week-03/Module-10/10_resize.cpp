#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>myList={10,20,30,40,50};
    for(int i: myList){
        cout<<i<<" ";
    }
    cout<<endl;

    myList.resize(3);
    for(int i: myList){
        cout<<i<<" ";
    }
    cout<<endl;

    myList.resize(10,6);
    for(int i: myList){
        cout<<i<<" ";
    }
    cout<<endl;
}