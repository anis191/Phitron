// Insert at any position:-
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> myList={1,2,3,4,5};
    myList.insert(next(myList.begin(),4),99);
    for(int i: myList){
        cout<<i<<" ";
    }
    cout<<endl;
    //Insert multiple values:-
    myList.insert(next(myList.begin(),2),{11,22,33,44});
    for(int j: myList){
        cout<<j<<" ";
    }
    cout<<endl;
    // Insert a full list in a specific position:-
    list<int>list1={1,2,3};
    list<int>list2={4,5,6};
    myList.insert(next(list1.begin(),3),list2.begin(),list2.end());
    for(int k: list1){
        cout<<k<<" ";
    }
    return 0;
}