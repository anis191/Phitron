#include<bits/stdc++.h>
using namespace std;
class Info{
    public:
    int id;
    string name;
    string city;
    Info(int id, string name, string city){
        this->id = id;
        this->name = name;
        this->city = city;
    }
};
int main(){
    // Normal/Static object:-
    // Info rakib(10,"Rakib","Dhaka");
    // Dynamic object:-
    Info *rakib = new Info(10,"Rakib","Dhaka");
    cout<<rakib->id<<" "<<rakib->name<<" "<<rakib->city<<endl;
    delete rakib;
    return 0;
}