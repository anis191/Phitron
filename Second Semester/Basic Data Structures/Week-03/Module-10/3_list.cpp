#include<bits/stdc++.h>
using namespace std;
int main(){
    //Create a list with 'N' elements and values will 'V':-
    list<int>myList(5,10);
    for(int i: myList){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size is: "<<myList.size();
    return 0;
}