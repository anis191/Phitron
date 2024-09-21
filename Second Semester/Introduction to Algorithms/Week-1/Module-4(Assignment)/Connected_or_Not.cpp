#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e; cin>>n>>e;
    vector<int> arr[n];
    while(e--){
        int a,b; cin>>a>>b;
        arr[a].push_back(b);
    }
    int q; cin>>q;
    while(q--){
        int a,b; cin>>a>>b;
        if(a == b){
            cout << "YES" << endl;
            continue;
        }
        bool found = false;
        for(int child: arr[a]){
            if(child == b){
                cout<<"YES"<<endl;
                found = true;
                break;
            }
        }
        if(found == false)
            cout<<"NO"<<endl;
    }
    return 0;
}