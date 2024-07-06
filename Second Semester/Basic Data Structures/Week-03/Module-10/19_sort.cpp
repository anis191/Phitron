#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>myList={1,8,3,2,5,9,7,6,4};
    for(int i: myList){
        cout<<i<<" ";
    }cout<<endl;
    //asending:-
    myList.sort();
    for(int i: myList){
        cout<<i<<" ";
    }cout<<endl;
    //desending:-
    list<int>myList2={1,8,3,2,5,9,7,6,4};
    myList2.sort(greater<int>());
    for(int i: myList2){
        cout<<i<<" ";
    }
    return 0;
}