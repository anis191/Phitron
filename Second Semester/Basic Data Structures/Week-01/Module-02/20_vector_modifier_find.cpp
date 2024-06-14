#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5};
    vector<int>::iterator i;
    i = find(v.begin(), v.end(), 3);
    if(i == v.end())
        cout<<"Not Found";
    else
        cout<<"Found!";
    return 0;
}
/*
Short cut:-
auto i = find(v.begin(), v.end(), 3);
*/