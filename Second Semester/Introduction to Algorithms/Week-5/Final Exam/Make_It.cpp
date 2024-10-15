#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n;
bool vis[100001];
bool ck(ll val){
    if(val>n)
        return false;
    if(val==n)
        return true;
    if(vis[val])
        return false;
    vis[val] = true;
    return ck(val+3) || ck(val*2);
}
int main(){
    int t; cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        memset(vis,false,sizeof(vis));
        bool f = ck(1);
        if(f==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}