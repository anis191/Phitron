#include<bits/stdc++.h>
using namespace std;
int main(){
    //Create a list with 'N' elements:-
    list<int>myList(5);
    for(int i: myList){
        cout<<i<<" ";
    }
    cout<<endl<<myList.size();
    return 0;
}