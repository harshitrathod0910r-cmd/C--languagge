
#include <iostream>
using namespace std;

class coustomer
{
    private:
            int id;
            string name;
            int age;
       
            string city;
            int mobileno;
            int  validity;
            string brand;
            
    public:
            void setdata(int i,string n,int a,string ci,int m,int v,string b)
            {
                id=i;
                name=n;
                age=a;
                city=ci;
                mobileno=m;
                validity=v;
                brand=b;
            }
            
            void getdata()
            {
                cout<<"id is="<<id<<endl;
                cout<<"name is="<<name<<endl;
                cout<<"age is="<<age<<endl;
                cout<<"city is="<<city<<endl;
                cout<<"mob no is="<<mobileno<<endl;
                cout<<"validity in month is="<<validity<<endl;
                cout<<"sim brand is="<<brand<<endl;
            }
            
};

int main() {
    
    coustomer c[5];
    c[0].setdata(1,"harshit",20,"modasa",9022389291,2,"jio");
    c[1].setdata(2,"rohit",21,"mansa",9122389291,3,"airtel");
    c[2].setdata(3,"abhay",22,"mehsana",9222389291,4,"bsnl");
    c[3].setdata(4,"manan",23,"surat",9322389291,5,"vi");
    c[4].setdata(5,"kiran",24,"hmt",9422389291,6,"reliance");
    
    for(int i=0;i<5;i++)
    {
        cout<<"------student--"<<i+1<<"--record------"<<endl;
        c[i].getdata();
    }
    return 0;
}




















