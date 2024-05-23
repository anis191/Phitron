#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    int cls;
    float gpa;
    char gread;
    Student(int id, int cls, float gpa, char gread){
        this->id = id;
        this->cls = cls;
        this->gpa = gpa;
        this->gread = gread; 
    }
};
int main(){
    Student anis(2314,15,3.52,'A');
    Student muhi(2270,15,2.11,'B');
    cout<<anis.id<<" "<<anis.cls<<" "<<anis.gpa<<" "<<anis.gread<<endl;
    cout<<muhi.id<<" "<<muhi.cls<<" "<<muhi.gpa<<" "<<muhi.gread<<endl;
    return 0;
}