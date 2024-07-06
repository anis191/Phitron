#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> myList={1,2,3,4,5};
    myList.pop_back();  //delete last value/delete_tail
    for(int i: myList){
        cout<<i<<" ";
    }
    cout<<endl;
    myList.pop_front(); //delete first value/delete_head
    for(int i: myList){
        cout<<i<<" ";
    }
    return 0;
}