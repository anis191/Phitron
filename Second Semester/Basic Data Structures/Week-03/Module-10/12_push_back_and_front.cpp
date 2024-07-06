#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> myList={1,2,3,4,5};
    myList.push_back(99);
    for(int i: myList){
        cout<<i<<" ";
    }
    cout<<endl;
    myList.push_front(11);
    for(int i: myList){
        cout<<i<<" ";
    }
    return 0;
}