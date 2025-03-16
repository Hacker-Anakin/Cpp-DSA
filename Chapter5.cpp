/*
    👉 STRUCTURES, ENUMERATIONS & UNIONS
*/

#include <iostream>
using namespace std;


// 👉 Structures
struct MyStruct // Structures in C++, can hold different types of variables in 1.
{
    string first_name;
    string last_name;
    int age;
    float salary;

    // Member Functions
    void displayInfo() {
        cout << "First Name: " << first_name << endl;
        cout << "Last Name: " << last_name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

// 👉 Enumerations
enum week {  // Enumerations in C++, are user-defined data types that consist of integral constants.
    Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday 
};


// 👉 Unions
union age // Unions in C++, are user-defined data types that can hold data of different types in the same memory location. (shared memory)
{
    int a;
    float b;
    char c;
};

int main(){
    MyStruct p1; // Declaring a structure variable
    
    p1.first_name = "Anmol"; // Assigning values to structure members
    p1.last_name = "Raj";
    p1.age = 15;
    p1.salary = 6900000.00;

    p1.displayInfo(); // Accessing structure member functions

    week today; // Declaring a variable of enum week
    today = Wednesday; // Assigning value to today
    cout << "Day " << today+1;

    age.a = 1;
    // age.b = 1.1 // this gives an error as in union only 1 value can be stored at a time

    return 0;
}