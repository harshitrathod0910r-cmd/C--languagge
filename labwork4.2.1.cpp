#include<iostream>
using namespace std;

class hotelrecord
{
    private:
            int id;
            string name;
            string type;
            string rating;
            int establisyear;
            int staff;
            int room;
            
            static string location;
            
    public:
            void setdetail(int i,string n,string t,string r,int e,int s,int q)
            {
             id=i;
             name=n;
             type=t;
             rating=r;
             establisyear=e;
             staff=s;
             room=q;
            }
            void showdetail()
            {
             
                cout<<"hotel_name:"<<name<<endl;
                cout<<"hotel_type(like hotel or motel):"<<type<<endl;
                cout<<"hotel_rating:"<<rating<<endl;
                cout<<"hotel_ establis_year:"<< establisyear<<endl;
                cout<<"hotel_ staff:"<<staff<<endl;
                cout<<"hotel_ room:"<<room<<endl;
            }
            int getid()
            {
                return id;
            }
            
};

int main()
{
    int chooseno,flag=0;
     
    cout<<"enter hotel no(1 to 5):"<<endl;
    cin>>chooseno;
    
     hotelrecord h[5];
     h[0].setdetail(1,"pratham","motel","*****",2020,21,32);
     h[1].setdetail(2,"lakshmi","hotel","*",2023,28,32);
     h[2].setdetail(3,"magic","motel","**",2005,23,32);
     h[3].setdetail(4,"skyblue","motel","****",2010,27,32);
     h[4].setdetail(5,"palate","hotel","***",2014,22,32);
     
     for(int i=0;i<5;i++)
     {
        if(h[i].getid()==chooseno)
        {
            cout<<"hotel  found"<<endl;
            h[i].showdetail();
            flag=1;
        }
     }
     
     if(flag==0)
     {
         cout<<"enter valid hotel no";
     }
     
     return 0;
}










