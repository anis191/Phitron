#include<bits/stdc++.h>
using namespace std;

namespace Student{
    int id = 10;
    string user_name = "anis512";
    class Personal_info{
        public:
        string full_name;
        int age;
        string city;
    };
    void result(){
        cout<<"SSC: "<<4.99<<endl;
        cout<<"HSC: "<<4.91<<endl;
    }
}

int main(){
    cout<<Student::id<<endl;
    cout<<Student::user_name<<endl;
    Student::result();
    return 0;
}