#include<iostream>
using namespace std;

class bankaccount
{
    private:
            int balance;
    public:
         
                bankaccount(int x)
             {
                balance=x;
             }
            
            void deposit(int a)
            {
                balance=balance+a;
                cout<<"deposit"<<a<<endl;
            }
            
            void withdraw(int a)
            {
                balance=balance-a;
                cout<<"withdraw"<<a<<endl;
            }
            
            int getbalance()
            {
                return balance;
            }
};

int main()
{
   
    
    bankaccount ac(10000);
    
    cout<<"totamount"<<ac.getbalance()<<endl;
    
    ac.deposit(200);
    ac.withdraw(50);
    
    cout<<ac.getbalance()<<endl;
    
    return 0;
}