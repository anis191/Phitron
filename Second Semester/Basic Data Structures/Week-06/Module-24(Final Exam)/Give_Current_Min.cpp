#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    priority_queue<int, vector<int>,greater<int>>pq;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        pq.push(x);
    }
    int q; cin>>q;
    while(q--){
        int c; cin>>c;
        if(c == 0){
            int x; cin>>x;
            pq.push(x);
            cout<<pq.top()<<endl;
        }else if(c == 1){
            if(pq.size() == 0){
                cout<<"Empty"<<endl;
            }else{
                cout<<pq.top()<<endl;
            }
        }else{
            if(pq.size() == 0){
                cout<<"Empty"<<endl;
            }else{
                pq.pop();
                if(pq.size() == 0){
                    cout<<"Empty"<<endl;
                }else{
                    cout<<pq.top()<<endl;
                }
            }
        }
    }
    return 0;
}