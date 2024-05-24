#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    char name[101];
    char sec;
    int mark;
};
int main(){
    int t;
    cin>>t;
    for(int test=1; test<=t; test++){
        Student stu1;
        Student stu2;
        Student stu3;
        cin>>stu1.id>>stu1.name>>stu1.sec>>stu1.mark;
        cin>>stu2.id>>stu2.name>>stu2.sec>>stu2.mark;
        cin>>stu3.id>>stu3.name>>stu3.sec>>stu3.mark;
        int a[3];
        int ans = 0;
        if(stu1.mark == stu2.mark && stu1.mark == stu3.mark){
            if(stu1.id<stu2.id && stu1.id<stu3.id){
                ans = 1;
            }else if(stu2.id<stu1.id && stu2.id<stu3.id){
                ans = 2;
            }else{
                ans = 3;
            }
        }else if(stu1.mark>stu2.mark && stu1.mark>stu3.mark){
            ans = 1;
        }else if(stu2.mark>stu1.mark && stu2.mark>stu3.mark){
            ans = 2;
        }else if(stu3.mark>stu1.mark && stu3.mark>stu2.mark){
            ans = 3;
        }else{
            int mx = max({stu1.mark,stu2.mark,stu3.mark});
            if(stu1.mark == mx && stu2.mark == mx){
                if(stu1.id<stu2.id){
                    ans = 1;
                }else{
                    ans = 2;
                }
            }else if(stu1.mark == mx && stu3.mark == mx){
                if(stu1.id<stu3.id){
                    ans = 1;
                }else{
                    ans = 3;
                }
            }else{
                if(stu2.id<stu3.id){
                    ans = 2;
                }else{
                    ans = 3;
                }
            }
        }
        if(ans == 1){
            cout<<stu1.id<<" "<<stu1.name<<" "<<stu1.sec<<" "<<stu1.mark<<endl;
        }else if(ans == 2){
            cout<<stu2.id<<" "<<stu2.name<<" "<<stu2.sec<<" "<<stu2.mark<<endl;
        }else{
            cout<<stu3.id<<" "<<stu3.name<<" "<<stu3.sec<<" "<<stu3.mark<<endl;
        }
    }
    return 0;
}