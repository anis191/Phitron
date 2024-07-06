#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>myList={10,20,30,40,50};
    for(int i: myList){
        cout<<i<<" ";
    }
    cout<<endl;
    if(myList.empty() == 0){
        cout<<"Not empty"<<endl;
    }else{
        cout<<"empty"<<endl;
    }

    myList.clear();
    if(myList.empty() == 0){
        cout<<"Not empty"<<endl;
    }else{
        cout<<"empty"<<endl;
    }
    return 0;
}