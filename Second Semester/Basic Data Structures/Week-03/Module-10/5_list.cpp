#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[5]={1,2,33,4,5};

    list<int>myList(array,array+5);
    for(int i: myList){
        cout<<i<<" ";
    }
    cout<<endl<<myList.size();
    return 0;
}