#include<bits/stdc++.h>
using namespace std;

namespace Student{
    int id = 33;
    string user_name = "anis666";
    class Personal_info{
        public:
        string full_name;
        int age;
        string city;
    };
    void result(){
        cout<<"SSC: "<<4.95<<endl;
        cout<<"HSC: "<<4.97<<endl;
    }
}

using namespace Student;
int main(){
    cout<<id<<endl;
    cout<<user_name<<endl;
    result();
    return 0;
}