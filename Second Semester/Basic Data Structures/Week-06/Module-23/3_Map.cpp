#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>mp;
    //insert():
    mp.insert({"Anisul Alam",119});
    mp.insert({"Ariful Islam", 200});
    mp.insert({"Muhi Chow", 50});
    mp.insert({"Shariar sha", 300});
    //Print(): iterators
    for(auto it=mp.begin(); it != mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    //Print with key:
    cout<<mp["Anisul Alam"]<<endl;
    //Find a value in pq using count()b function:
    if(mp.count("Ariful") == true)
        cout<<"Yes, Ase"<<endl;
    else
        cout<<"No, Nei"<<endl;
    //Value store with key:
    mp["Koly"] = 333;
    mp["Abcd"] = 13;
    
    for(auto it=mp.begin(); it != mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}