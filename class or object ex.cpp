
#include <iostream>
using namespace std;

class employee {
        public:
                int id;
                string name;
                int age;
                string role;
                int salary;
                string city;
                int experince;
                string companyname;
    void showdetail()
    {
        cout<<"id is:"<<id<<endl;
        cout<<"name is:"<<name<<endl;
        cout<<"age is:"<<age<<endl;
        cout<<"role is:"<<role<<endl;
        cout<<"salary is:"<<salary<<endl;
        cout<<"city is:"<<city<<endl;
        cout<<"experince is:"<<experince<<endl;
        cout<<"companyname is:"<<companyname<<endl<<endl;
    }
};

int main() {
        employee e1;
        e1.id=7;
        e1.name="harshit rathod";
        e1.age=21;
        e1.role="manger";
        e1.salary=50000;
        e1.city="modasa";
        e1.experince=2;
        e1.companyname="google";
        e1.showdetail();
        
        employee e2;
        e2.id=6;
        e2.name="rohit raval";
        e2.age=20;
        e2.role="hr";
        e2.salary=53000;
        e2.city="hmt";
        e2.experince=4;
        e2.companyname="microsoft";
        e2.showdetail();
        
        employee e3;
        e3.id=5;
        e3.name="abhay bhoi";
        e3.age=21;
        e3.role="peon";
        e3.salary=83000;
        e3.city="shimla";
        e3.experince=10;
        e3.companyname="apple";
        e3.showdetail();
    
    return 0;
}