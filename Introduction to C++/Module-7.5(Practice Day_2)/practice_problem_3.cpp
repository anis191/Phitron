/*
Question: Take a sentence S as input and then take another string word X as input. Then count how many times the word X appeared in the sentence. The words in the sentence are separated by spaces.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a; getline(cin,a);
    string word; cin>>word;
    int found = 0;
    stringstream ss(a);
    string i;
    while(ss >> i){
        if(i == word){
            found++;
        }
    }
    cout<<found;
    return 0;
}