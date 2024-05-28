#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int id;
    float gpa;
    Student(string name, int id, float gpa){
        this->name = name;
        this->id = id;
        this->gpa = gpa;
    }
    void fun(){
        cout<<name<<"\n"<<id<<"\n"<<gpa<<endl;
        cout<<"All semester: "<<(gpa+8);
    }
};
int main(){
    Student anis("Anisul Alam",2314,3.44);
    anis.fun();
    // cout<<anis.name<<" "<<anis.id<<endl;
    return 0;
}