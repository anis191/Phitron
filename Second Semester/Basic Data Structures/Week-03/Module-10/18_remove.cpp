#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>myList={1,2,3,1,2,3,4,5,2};
    for(int i: myList){
        cout<<i<<" ";
    }cout<<endl;
    myList.remove(2);
    for(int i: myList){
        cout<<i<<" ";
    }
    return 0;
}