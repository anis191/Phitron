#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    int cls;
    float gpa;
    char gread;
    Student(int i, int c, float g, char gr){
        id = i;     // id = id ?
        cls = c;    // cls = cls ?
        gpa = g;    // gpa = gpa ?
        gread = gr; // gread = gread ?(next program)
    }
};
int main(){
    Student anis(2314,15,3.52,'A');
    Student muhi(2200,15,2.11,'B');
    cout<<anis.id<<" "<<anis.cls<<" "<<anis.gpa<<" "<<anis.gread<<endl;
    cout<<muhi.id<<" "<<muhi.cls<<" "<<muhi.gpa<<" "<<muhi.gread<<endl;
    return 0;
}