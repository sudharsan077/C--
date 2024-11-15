#include<cstring>

#include<iostream>
using namespace std;
class emp{
    private:
    int id=0;
    string name;
    float salary;
    public:
    emp(){
        id=0;
        name=" ";
        salary=0;
    }
    emp(int a,string name,float c){
        id=a;
        name=name;
        salary=c;
    }
    emp(emp&a){
        id=a.id;
        name=name;
        salary=a.salary;
    }
    void display(){
        cout<<"id"<<id<<endl<<"name"<<name<<endl<<"salary"<<salary<<endl;
    }
};
int main(){
    emp e1;
    emp e2(54,"vishnu",567.90);
    e1.display();
    e2.display();
    
}
