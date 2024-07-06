#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>myList={10,20,30,40,50};
    for(int i: myList){
        cout<<i<<" ";
    }
    cout<<endl;
    //Size:-
    cout<<myList.size()<<endl;
    //Max Size:-
    cout<<myList.max_size()<<endl;
    //Clear:-
    myList.clear();
    for(int i: myList){
        cout<<i<<" ";
    }
    cout<<myList.size()<<endl;
    return 0;
}