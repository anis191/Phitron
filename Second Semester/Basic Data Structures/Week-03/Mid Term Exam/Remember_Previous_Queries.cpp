#include<bits/stdc++.h>
using namespace std;
int main(){
    int q; cin>>q;
    list<int>myList;
    while(q--){
        int x,v; cin>>x>>v;
        if(x == 0){
            myList.push_front(v);
        }else if(x == 1){
            myList.push_back(v);
        }else if(x == 2){
            int s = myList.size();
            if(v >= s){
                myList = myList;
            }else if(v == s-1){
                myList.pop_back();
            }else if(v == 0){
                myList.pop_front();
            }else{
                myList.erase(next(myList.begin(),v));
            }
        }
        cout<<"L -> ";
        for(int i: myList){
            cout<<i<<" ";
        }
        cout<<endl;
        list<int> re(myList);
        re.reverse();
        cout<<"R -> ";
        for(int i: re){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}