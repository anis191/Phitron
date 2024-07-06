#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>myList={1,2,3,2,9,5,2,1,2,4,7,2,6};
    for(int i: myList){
        cout<<i<<" ";
    }cout<<endl;
    //asending:-
    myList.sort();
    for(int i: myList){
        cout<<i<<" ";
    }cout<<endl;
    //unique function work on sorted list
    myList.unique();
    for(int i: myList){
        cout<<i<<" ";
    }
    return 0;
}