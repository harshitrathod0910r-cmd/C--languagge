#include<iostream>
using namespace std;

class carrecord{
    public:
           int id;
           string color;
           string name;
           string model;
           int year;
    
    void inputinfo(int i,string c,string n,string m,int y)
    {
        id=i;
        color=c;
        name=n;
        model=m;
        year=y;
    }
    
    void showdetail()
    {
        cout<<"id is:"<<id<<endl;
        cout<<"color is:"<<color<<endl;
        cout<<"company name is:"<<name<<endl;
        cout<<"model is:"<<model<<endl;
        cout<<"realese year is:"<<year<<endl<<endl;
    }
};

int main()
{
    carrecord car[5];
    car[0].inputinfo(1,"black","hyundai","creata",2012);
    car[1].inputinfo(2,"white","suzuki","grandvitara",2024);
    car[2].inputinfo(3,"gray","landrover","defender",2022);
    car[3].inputinfo(4,"violet","tata","harrier",2023);
    car[4].inputinfo(5,"red","mahindra","thar",2023);
    
    
    for(int i=0;i<5;i++)
    {
        cout<<"-----car"<<i+1<<"record-----"<<endl<<endl;
        car[i].showdetail();
    }

    
    return 0;
}