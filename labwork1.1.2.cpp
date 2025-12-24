#include<iostream>
using namespace std;

int main()
{
    int i,j;
    cout<<"enter the i and j:";
    cin>>i>>j;
    while(i<=j)
    {
        if(i%4==0)
        {
            cout<<i;
        }
        i++;
    }

}