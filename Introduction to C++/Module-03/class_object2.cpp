#include<bits/stdc++.h>
using namespace std;
class info{
    public:
    int id;
    char name[20];
    long long int phone;
    char email[20];
};
int main(){
    info id1,id2;
    id1.id=1,id2.id=2;
    cin.getline(id1.name,20);
    cin>>id1.phone;
    cin>>id1.email;

    getchar();
    cin.getline(id2.name,20);
    cin>>id2.phone;
    cin>>id2.email;

    cout<<"Id no:- "<<id1.id<<"(Info)"<<endl;
    cout<<"Name:- "<<id1.name<<endl;
    cout<<"Phone:- "<<id1.phone<<endl;
    cout<<"Emain:- "<<id1.email<<"\n"<<endl;

    cout<<"Id no:- "<<id2.id<<"(Info)"<<endl;
    cout<<"Name:- "<<id2.name<<endl;
    cout<<"Phone:- "<<id2.phone<<endl;
    cout<<"Emain:- "<<id2.email<<endl;
    
    return 0;
}