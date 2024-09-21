#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e; cin>>n>>e;
    vector<int> arr[n];
    while(e--){
        int a,b; cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int q; cin>>q;
    while(q--){
        int x; cin>>x;
        bool s = true;
        if(arr[x].size() == 0){
            cout<<-1<<endl;
            s = false;
        }else{
            sort(arr[x].begin(), arr[x].end(), greater<int>());
        }
        if(s == true){
            for(int c: arr[x]){
                cout<<c<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}