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
    Info *rakib = new Info(10,"Rakib","Dhaka");
    Info *sakib = new Info(33,"Sakib","Pabna");
    // Before copy -->
    cout<<rakib->name<<endl;
    cout<<sakib->name<<endl;
    // After copy -->
    /* Wrong way:-
    rakib = sakib;
    delete sakib;
    cout<<rakib->name<<endl;
    cout<<sakib->name<<endl;
    */
    // Correct way:-
    *rakib = *sakib;
    delete sakib;
    cout<<rakib->name<<endl;
    cout<<sakib->name<<endl;
    delete rakib;
    // delete sakib;
    return 0;
}