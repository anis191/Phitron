#include<bits/stdc++.h>
using namespace std;
int check_egypt(string & a, int i){
    int position = i;
    int yes=1;
    if(i+1 < a.size() && a.at(i+1) == 'G'){
        yes++;
        i++;
        if(i+1 < a.size() && a.at(i+1) == 'Y'){
            yes++;
            i++;
            if(i+1 < a.size() && a.at(i+1) == 'P'){
                yes++;
                i++;
                if(i+1 < a.size() && a.at(i+1) == 'T'){
                    yes++;
                }else{
                    return position+4;
                }
            }else{
                return position+3;
            }
        }else{
            return position+2;
        }
    }else{
        return i+1;
    }
    if(yes == 5){
        a.replace(position,5," ");
        return position+1;
    }
}
int main(){
    string a; getline(cin,a);
    int i=0;
    while(i < a.size()){
        if(a.at(i) == 'E'){
            int position = check_egypt(a,i);
            i = position;
        }else{
            i++;
        }
    }
    cout<<a;
    return 0;
}