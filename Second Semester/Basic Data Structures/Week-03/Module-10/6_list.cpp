#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,4,3,6};

    list<int>myList(v.begin(),v.end());
    for(int i: myList){
        cout<<i<<" ";
    }
    cout<<endl<<myList.size();
    return 0;
}