#include<bits/stdc++.h>
using namespace std;
int main(){
    //Syntax --> vector<type>vector_name(size);
    vector<int>v(5); //Size is:5. But we can't assign any value,that's why all index value is garbage value.
    cout<<v.size()<<endl;
    for(int i=0; i<5; i++)
        cout<<v[i]<<" ";
    return 0;
}