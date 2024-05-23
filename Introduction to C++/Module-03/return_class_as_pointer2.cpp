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
    // Student anis(2314,15,3.21,'B');
    Student *anis = new Student(2314,5,3.21,'B');
    // Student *p = &anis;
    return anis;
}
int main(){
    Student *temp = test();
    cout<<(*temp).id<<" "<<temp->cls<<" "<<(*temp).gpa<<" "<<temp->gread<<endl;
    return 0;
}