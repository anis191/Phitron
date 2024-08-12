#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue <string> MyQ;
    int q; cin>>q;
    while(q--){
        int n; cin>>n;
        if(n == 0){
            string name; cin>>name;
            MyQ.push(name);
        }else{
            if(! MyQ.empty()){
                cout<<MyQ.front()<<endl;
                MyQ.pop();
            }else{
                cout<<"Invalid"<<endl;
            }
        }
    }
    return 0;
}