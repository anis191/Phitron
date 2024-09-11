#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    int n; cin>>n;
    while(n--){
        int x; cin>>x;
        s.insert(x);
    }
    for(auto i=s.begin(); i != s.end(); i++){
        cout<<*i<<" ";
    }

    //searching: count()
    if(s.count(2))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}