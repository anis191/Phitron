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
    // We can create a function inside a class
    void fun(){
        cout<<"-----------------"<<endl;
    }
};
int main(){
    Student anis("Anisul Alam",2314,3.44);
    anis.fun();
    cout<<anis.name<<" "<<anis.id<<endl;
    anis.fun();
    return 0;
}