// We send a string in a class constructor as a string direct!
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
};
int main(){
    Student anis("Anisul Alam",2314,3.44);
    Student shariar("Shariar bin shahid",2310,4.00);
    Student muhi("Muhi chow.",2314,3.75);
    cout<<anis.name<<" "<<anis.id<<" "<<anis.gpa<<endl;
    cout<<shariar.name<<" "<<shariar.id<<" "<<shariar.gpa<<endl;
    cout<<muhi.name<<" "<<muhi.id<<" "<<muhi.gpa<<endl;
    return 0;
}