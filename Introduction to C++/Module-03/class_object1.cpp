#include<bits/stdc++.h>
using namespace std;
/*
Syntax of a class:-
class Name{
    public:
        dataType=variables;
        dataType=variables;
};
*/
class Student{
    public:
    int serial;
    char name[20];
    int id;
    float gpa;
};
int main(){
    // Object declear Syntax--> class object1,object2..;
    Student anis;
    cin>>anis.serial;
    getchar();
    cin.getline(anis.name,20);
    cin>>anis.id>>anis.gpa;
    cout<<anis.serial<<endl;
    cout<<anis.name<<" "<<anis.id<<"\n";
    cout<<anis.gpa<<endl;

    return 0;
}