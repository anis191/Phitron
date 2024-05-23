#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    int cls;
    float gpa;
    char gread;
    Student(int id, int cls, float gpa, char gread){
        (*this).id = id;
        (*this).cls = cls;
        (*this).gpa = gpa;
        (*this).gread = gread; 
    }
};
Student* test(){
    Student anis(2314,15,3.21,'B');
    Student *p = &anis;
    return p;
}
int main(){
    Student *temp = test(); // temp = anis(same)
    // Output show wrong 100%
    cout<<(*temp).id<<" "<<temp->cls<<" "<<(*temp).gpa<<" "<<temp->gread<<endl;
    // Output wrong because:- A static class pointer does not return successfully! We need dynamic class, is we return a class as a pointer!
    return 0;
}