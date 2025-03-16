/*
    👉 OOP
*/

#include <iostream>
#include <string>
using namespace std;

class Teacher {
public: // access specifier, public means that the attributes and methods can be accessed from outside the class case of abstraction

    // attributes
    string name;
    string dept;
    string subject;
    int age;

    Teacher(string name, string dept, string subject, int age){ // Constructor function to initialize the class
        this->name = name; // this keyword is used to refer to the current object i.e. this-> name means name of class = name passed as variable in this function.
        this->dept = dept;
        this->subject = subject;
        this->age = age;
        cout<<"Initializing Teacher class"<<endl;
    }

    //methods
    void change_salary(double salary) {
        this->salary = salary; 
    }

    int get_salary() {
        return salary;
    }

    ~Teacher(){ // Destructor function to end the class, it is called automatically at the end of program
        cout<<"Destructor function deletes everything and free up memory"<<endl;
    }

private: // private attributes can only be accessed within the class
    double salary = 50000;

};

class Person { // Person class another class
public:
    double bday;
    int place_of_birth;
    void display() {
        cout<<"Birthday: "<<bday<<endl;
        cout<<"Place of Birth: "<<place_of_birth<<endl;
    } 
};

class Account : public Teacher, public Person { // Inheritance, Account class is inheriting from Teacher class as public and Person class as public
    // Account class will have all the attributes and methods of Teacher class and Person class in public section and protected section
    // Account class will have all the attributes and methods of Teacher class and Person class in private section but they will not be accessible
private:
    string account_no;
    string password;
    double balance;

public:
    string account_name;
    // string name, string dept, string subject, int age are inherited from Teacher class

    Account(string name, string dept, string subject, int age, string account_no, string password, double balance) : Teacher(name, dept, subject, age) { // Constructor function to initialize the class and also initialize the inherited class Teacher
        this->account_no = account_no;
        this->password = password;
        this->balance = balance;
        cout<<"Initializing Account class"<<endl;
    }

    void get_bank_details() {
        cout<<"Name: "<<name<<endl;
        cout<<"Account Name: "<<name<<endl;
        cout<<"Account Number: "<<account_no<<endl;
        cout<<"Balance: "<<balance<<endl;
    }

};

int main() {
    Teacher t1("Anmol", "c/c++", "CS", 15); // Constructor automatically called
    // t1.salary = 50000; // this will give an error because salary is a private attribute

    Teacher t2(t1); // Copy constructor

    t1.change_salary(60000);
    cout<<t1.get_salary()<<endl;

    Account a1("Anmol", "c/c++", "CS", 15, "123456", "1234", 1000); // Using Account class inherited from Teacher class
    a1.get_bank_details();

    return 0;
}