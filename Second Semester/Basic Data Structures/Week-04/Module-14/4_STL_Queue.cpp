#include<bits/stdc++.h>
using namespace std;
int main(){
    //Syntax --> queue <type> queue_name;
    queue <int> q;
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        q.push(x);
    }
    while(! q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}