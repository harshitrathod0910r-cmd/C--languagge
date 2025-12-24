#include<iostream>
using namespace std;

int main()
{
int arr[5],i,n;
cout<<"enter the size:";
cin>>n;
cout<<"enter the ele:";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=0;i<n;i++)
{
    if(arr[i]%2==0)
    {
        cout<<"\neven no is"<<arr[i];
    }
}
}