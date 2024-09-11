#include<bits/stdc++.h>
using namespace std;
int main(){
    string sentance;
    getline(cin, sentance);
    string word;
    stringstream ss(sentance);
    map<string, int>mp;
    while(ss >> word){
        mp[word]++;
    }
    for(auto i=mp.begin(); i != mp.end(); i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}