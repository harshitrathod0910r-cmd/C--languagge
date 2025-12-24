#include<iostream>
using namespace std;

class student
{
    private:
            string name;
            int age;
            

    public:
            void setdata(string n)
            {
                name=n;
                
            }
            string getdata()
            {
                return name;
            }

                   void setdata(int a)
            {
                age=a;
                
            }
            int getage()
            {
                return age;
            }
};

int main()
{
    student s1;
    s1.setdata("harshit");
    cout<<s1.getdata();

      s1.setdata(21);
    cout<<s1.getage();

    return 0;
}