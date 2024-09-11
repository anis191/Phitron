#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    cin.ignore();
    for(int tc=0; tc<t; tc++){
        string s;
        getline(cin,s);
        string w;
        stringstream ss(s);
        map<string, int>mp;
        int mx=0;
        string mx_word;
        while(ss >> w){
            mp[w]++;
            if(mp[w] > mx){
                mx = mp[w];
                mx_word = w;
            }
        }
        cout<<mx_word<<" "<<mx<<endl;
    }
    return 0;
}