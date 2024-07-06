#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>myList={10,20,30,40,50};
    for(int i: myList){
        cout<<i<<" ";
    }cout<<endl;
    myList.reverse();
    for(int i: myList){
        cout<<i<<" ";
    }
    return 0;
}