// // #include <iostream>
// // #include <string>
// // using namespace std;

// // class Student {
// // private:
// //     string name;
// //     int roll;
// //     float gpa;

// // public:
// //     // Default constructor
// //     Student() : name("None"), roll(0), gpa(0.0f) {}

// //     // Parameterized constructor
// //     Student(const string &n, int r, float g) : name(n), roll(r), gpa(g) {}

// //     // Copy constructor (use const reference)
// //     Student(const Student &s) : name(s.name), roll(s.roll), gpa(s.gpa) {}

// //     // Destructor
// //     ~Student() {
// //         cout << "Destructor Called for roll: " << roll << endl;
// //     }

// //     // Accessors (marked const)
// //     string getName() const { return name; }
// //     int getRoll() const { return roll; }
// //     float getGpa() const { return gpa; }

// //     // Modify (pass parameters by const reference / value)
// //     void modifygpa(const string &n, int r, float g) {
// //         name = n;
// //         roll = r;
// //         gpa = g;
// //     }

// //     // Display (does not modify object, so const)
// //     void display() const {
// //         cout << "Name: " << name << endl;
// //         cout << "Roll: " << roll << endl;
// //         cout << "GPA: " << gpa << endl;
// //     }
// // };

// // int main() {
// //     // Create an array of 3 Student objects
// //     Student s[3] = {
// //         Student("Harsh", 1, 8.9f),
// //         Student("Rohit", 2, 9.1f),
// //         Student("Abhay", 3, 8.5f)
// //     };

// //     int searchRoll;
// //     cout << "Enter roll number to search: ";
// //     if (!(cin >> searchRoll)) {
// //         cout << "Invalid input. Exiting.\n";
// //         return 1;
// //     }

// //     bool found = false;
// //     for (int i = 0; i < 3; i++) {
// //         if (s[i].getRoll() == searchRoll) {
// //             cout << "\nStudent Found!" << endl;
// //             found = true;
// //             s[i].display();
// //             break; // optional: stop after finding
// //         }
// //     }

// //     if (!found) {
// //         cout << "Sorry, enter a valid roll number.\n";
// //     }

// //     return 0;
// // }
// #include <iostream>
// using namespace std;

// class Student {
// private:
//     string name;
//     int roll;
//     float gpa;
    

// public:
       
//     Student() {
//         name = "None";
//         roll = 0;           //default constructer
//         gpa = 0.0;
        
        
//     }

//     Student(string n, int r, float g) {
//         name = n;
//         roll = r;            //parameterized constructer
//         gpa = g;
//     }

//     Student(Student &s) {
//         name = s.name;
//         roll = s.roll;           //copy  constructer
//         gpa = s.gpa;
//     }
    
//     ~Student()
//     {
//         cout<<"destructor"<<roll;
//     }

//     string getName() { return name; }
//     int getRoll() { return roll; }
//     float getGpa() { return gpa; }

//     void modifygpa(string &n, int &r, float &g) {
//         name = n;
//         roll = r;
//         gpa = g;
//     }

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Roll: " << roll << endl;
//         cout << "GPA: " << gpa << endl;
       
//     }
    
  
// };



// int main() {
//         int flag;
        
//     Student s[4] = {
//         Student("Harsh", 1, 8.9),
//         Student("Rohit", 2, 9.1),
//         Student("Abhay", 3, 8.5),
//         Student("Alpesh", 4, 9.5)
//     };

//     int searchRoll;
//     cout << "Enter roll number to search: ";
//     cin >> searchRoll;
        
//         flag=0;

//     for (int i = 0; i < 5; i++){
            
//         if (s[i].getRoll() == searchRoll) {
//             cout << "\nStudent Found!" << endl;
//             flag=1;
//             s[i].display();
             
         
//         }
     
//     }
    
//     if(flag==0)
//     {
//         cout<<" sorry enter valid no";
//     }
    

//     return 0;
// }

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;
    float gpa;
    

public:
       
    Student() {
        name = "None";
        roll = 0;           //default constructer
        gpa = 0.0;
        
        
    }

    Student(string n, int r, float g) {
        name = n;
        roll = r;            //parameterized constructer
        gpa = g;
    }

    Student(Student &s) {
        name = s.name;
        roll = s.roll;           //copy  constructer
        gpa = s.gpa;
    }
    
  

    string getName() { return name; }
    int getRoll() { return roll; }
    float getGpa() { return gpa; }

    void modifygpa(string &n, int &r, float &g) {
        name = n;
        roll = r;
        gpa = g;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "GPA: " << gpa << endl;
       
    }
    
  
};



int main() {
        int flag;
        
    Student s[4] = {
        Student("Harsh", 1, 8.9),
        Student("Rohit", 2, 9.1),
        Student("Abhay", 3, 8.5),
        Student("Alpesh", 4, 9.5)
    };

    int searchRoll;
    cout << "Enter roll number to search: ";
    cin >> searchRoll;
        
        flag=0;

    for (int i = 0; i < 5; i++){
            
        if (s[i].getRoll() == searchRoll) {
            cout << "\nStudent Found!" << endl;
            flag=1;
            s[i].display();
             
         
        }
     
    }
    
    if(flag==0)
    {
        cout<<" sorry enter valid no";
    }
    

    return 0;
}