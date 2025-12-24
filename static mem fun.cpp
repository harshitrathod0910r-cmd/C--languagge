#include<iostream>
using namespace std;

class box
{
    private:
            static int length;
            static int breadth;
            static int height;
    public:
           static void print()
           {
               cout<<"length is"<<length<<endl;
                cout<<"breadth is"<<breadth<<endl;
                 cout<<"height is"<<height<<endl<<endl;
           }
};

int box::length=20;
int box::breadth=30;
int box::height=40;

int main()
{
   box b;
   
   cout<<"static member function is called through object name:"<<endl;
   b.print();
   
    cout<<"static member function is called through class name:"<<endl;
   box::print();
    
    return 0;
}