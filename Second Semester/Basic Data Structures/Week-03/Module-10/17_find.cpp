// Insert at any position:-
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> myList={1,2,3,4,3,5,6};
    for(int i: myList){
        cout<<i<<" ";
    }
    cout<<endl;
    auto i=find(myList.begin(),myList.end(),34);
    if(i == myList.end()){
        cout<<"Not found";
    }else{
        cout<<"Found";
    }
    cout<<endl;
    return 0;
}