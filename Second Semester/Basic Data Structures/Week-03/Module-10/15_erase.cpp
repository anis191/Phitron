// Delete at any position:-
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> myList={1,2,3,4,5,6,7,8,9};
    myList.erase(next(myList.begin(),0));
    for(int i: myList){
        cout<<i<<" ";
    }
    cout<<endl;
    //Erase multiple values:-
    myList.erase(next(myList.begin(),2),next(myList.begin(),6));
    for(int j: myList){
        cout<<j<<" ";
    }
    return 0;
}