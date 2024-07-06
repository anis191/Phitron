#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>myList={1,2,3,4,5};

    list<int>a(myList);
    for(int i: a){
        cout<<i<<" ";
    }
    return 0;
}