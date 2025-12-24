#include<iostream>
using namespace std;

class student
{
    public:
           int id;

           void show()
           {
            cout<<id<<endl;
           }
};

int main()
{
    student s[3];
    s[0].id=101;
    s[1].id=102;
    s[2].id=103;

    for( int i=0;i<3;i++)
    {
        s[i].show();
    }
    return 0;
}
 