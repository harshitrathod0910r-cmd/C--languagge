#include<iostream>
using namespace std;

class A {

    public:
            static int x;
};

int A::x=12;

int main()
{
    cout<<"Acessing Data Static Member:"<<A::x<<endl;

    return 0;
}