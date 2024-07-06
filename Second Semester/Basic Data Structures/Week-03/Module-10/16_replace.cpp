// Insert at any position:-
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> myList={1,2,3,4,3,5,6,3,4,9,3,3,1,2,3};
    for(int i: myList){
        cout<<i<<" ";
    }
    cout<<endl;
    replace(myList.begin(),myList.end(),3,0);
    for(int j: myList){
        cout<<j<<" ";
    }
    cout<<endl;
    return 0;
}