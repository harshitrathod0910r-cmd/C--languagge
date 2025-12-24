#include <iostream>
using namespace std;

class student {

private:
    int id;
    string name;
    int age;
    string course;
    string city;
    string email;
    string college;

public:
    void setdata(int i, string n, int a, string c, string ci, string e, string co) {
        id = i;
        name = n;
        age = a;
        course = c;
        city = ci;
        email = e;
        college = co;
    }

    void getdata() {
        cout << " id:" << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "City: " << city << endl;
        cout << "Email: " << email << endl;
        cout << "College: " << college << endl << endl;
    }
};

int main() {
    student s[5]; 

    s[0].setdata(1, "Harshit", 19, "BBA", "Modasa", "h@gmail.com", "LJ Ghandhi");
    s[1].setdata(2, "Rohit", 20, "BCA", "Mnasa", "r@gmail.com", "LR Ghandhi");
    s[2].setdata(3, "Abhay", 21, "BA", "Modasa", "a@gmail.com", "Lb Ghandhi");
    s[3].setdata(4, "Dhruv", 22, "Bcom", "Modasa", "d@gmail.com", "Lp Ghandhi");
    s[4].setdata(5, "Milan", 23, "Bsc", "Modasa", "m@gmail.com", "Lw Ghandhi");

 
    for (int i = 0; i < 5; i++) {
        cout << "----- Student " << i + 1 << " Record -----" << endl << endl;
        s[i].getdata();
    }

    return 0;
}