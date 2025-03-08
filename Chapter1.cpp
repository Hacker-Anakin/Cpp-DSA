/*
    👉 BASIC PROGRAMMING CONCEPTS IN C++
*/

#include <iostream> // 👉 This is a header file that includes input output functions
#include <bits/stdc++.h> // 👉 This is a universal header file that includes every standard library, if you use this header file you don't need to include other header files like iostream, vector, etc.

namespace first // 👉 Namespace named first, namespace is used to avoid name conflicts
{
    int val = 100;
}

// Using std namespace
using namespace std;
// using namespace first; // This will use the namespace first and you don't need to use first::val to access the variable val directly you can use val

// 👉 Main() function: where the execution of program begins
int main()
{
    // prints hello world
    cout << "Hello World" << endl; // endl is used to print a newline character

    // 👉 Taking input
    int age;

    cout << "Enter your age:";

    cin >> age; // This will take input in integer format
    // or you can use
    // getline(cin, age); // This will take input ONLY in string format
    
    cout << "\nYour age is: " << age;

    // 👉 Variables in C++
    int value = 0; // variable definition
    const int num = 69; // constant variable definition, cannot be changed.

    cout<< value <<endl; // prints the value of variable value
    cout<< first::val <<endl; // prints the value of variable value in namespace first

    first::val = 200; // Accessing the variable val from namespace first

    cout<< first::val <<endl; // prints the value of variable value in namespace first


    // 👉 Data types in C++
    // char, int, float, double

    // char data type
    cout << "Size of char : " << sizeof(char) << endl;
    
    cout << "char minimum value: " << CHAR_MIN << endl;
    cout << "char maximum value: " << CHAR_MAX << endl;

    char sample[] = "Anmol"; // char array (string)
    cout << "char array: " << sample <<" Has size of "<< sizeof(sample) << endl; // prints the size of string, size of string is 6 because of null character at the end of string

    // int data type
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "char minimum value: " << INT_MIN << endl;
    cout << "char maximum value: " << INT_MAX << endl;

    cout << "Size of short int : " << sizeof(short int)<< " bytes" << endl; // short int data type smaller RAM needed than int

    // float data type
    cout << "Size of float : " << sizeof(float) << endl;
    
    // double data type
    cout << "Size of double : " << sizeof(double) << endl;

    // 👉 Pre and Post increment (or decrement)

    int a = 10;

    cout << "a = " << a << " Pre-increment a = " << ++a << "\n"; // prints 10 then 11
    cout << "a = " << a <<" Pre-increment a = " << a++ << "\n"; // prints 11 then 12
    cout << "a = " << a << " Pre-increment a = " << --a << "\n"; // prints 12 then 11
    cout << "a = " << a <<" Pre-increment a = " << a-- << "\n"; // prints 11 then 10

    // 👉 Operators
    // Arithmetic Operators
    int x = 10, y = 20;
    cout << "x + y = " << x + y << endl; // Addition
    cout << "x - y = " << x - y << endl; // Subtraction
    cout << "x * y = " << x * y << endl; // Multiplication
    cout << "x / y = " << x / y << endl; // Division
    cout << "x % y = " << x % y << endl; // Modulus

    //bitwise operators
    int p = 5, q = 9, o = 4;
    cout << "p & q & o= " << (p & q & o) << endl; // Bitwise AND
    cout << "p | q | o= " << (p | q | o) << endl; // Bitwise OR
    cout << "p ^ q ^ o= " << (p ^ q) << endl; // Bitwise XOR
    cout << "~p = " << (~p) << endl; // Bitwise NOT
    // cout << "p << 2 = " << (10 << 2) << endl; // Bitwise left shift
    // cout << "p >> 2 = " << (6 >> 1) << endl; // Bitwise right shift

    //logical operators
    bool r = true, s = false;
    cout << "r && s = " << (r && s) << endl; // Logical AND
    cout << "r || s = " << (r || s) << endl; // Logical OR
    cout << "!r = " << (!r) << endl; // Logical NOT

    // Relational Operators
    cout << "x == y = " << (x == y) << endl; // Equal to
    cout << "x != y = " << (x != y) << endl; // Not equal to
    cout << "x > y = " << (x > y) << endl; // Greater than
    cout << "x < y = " << (x < y) << endl; // Less than
    cout << "x >= y = " << (x >= y) << endl; // Greater than or equal to
    cout << "x <= y = " << (x <= y) << endl; // Less than or equal to

    // Assignment Operators
    int z = 10;
    z += 5; // z = z + 5
    cout << "z = " << z << endl;

    z -= 5; // z = z - 5
    cout << "z = " << z << endl;

    // 👉 Conditional Statements
    // if, else if, else
    int xnum = 6;

    if (xnum > 0){
        cout << "xnum is positive\n";
    }
    else if (xnum < 0){
        cout << "xnum is negative\n";
    }
    else{
        cout << "xnum is zero\n";
    }

    // goto statement
    int num1 = 45;

    if (num1 > 0) {
        goto error; // Jump to error handling if input is -ve
    }
    else if (num1 < 0){
        goto success; // Jump to success if input is +ve
    }
    else {
        cout << "Number is 0\n";
    }

    error:
        cout << "Invalid -ve\n";

    success:
        cout << "Valid +ve\n";

    // Ternary Conditional Operator (or shorthand if, else)
    // Evaluate largest of three using ternary operator
    int A = 10, B = 20, C = 30;

    int largest = (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);
    // largest = [is A > B ? if yes then is A > C ? if yes then A else C : if no then B > C ? if yes then B else C]
    cout<<largest<<endl;

    // 👉 Switch case
    int day = 4;
    switch (day) 
    {
        case 1:
            cout<<"MONDAY";
            break;
        case 2:
            cout<<"TUESDAY"; 
            break;
    
        case 3:
            cout<<"WEDNESDAY"; 
            break;
        case 4:
            cout<<"THURSDAY"; 
            break;
        case 5:
            cout<<"FRIDAY"; 
            break;
        case 6:
            cout<<"SATURDAY";
            break;
        case 7:
            cout<<"SUNDAY";
            break;
        
        default:
            cout<<"INVALID INPUT";
            break;
    }

    // 👉 Loops
    // for
    for (int i = 1; i <= 10; i++)
    {
        cout << "Hello World\n";
    }

    // for using an array
    char arr[] = "Anmol";

    for (int i = 0; i < 10; i++) {
        cout<<arr[i];
    }

    // for loops in iterations
    string fullName = "Anmol";
    for (char c : str) {
        cout<<c;
    }

    // infinite loop: ⚠ Waring may lag your pc as C++ directly works with memory
    // for ( ; ; )
    // {
    //     cout << "This loop will run forever.\n";
    // }

    //while
    int i = 1; // initialization expression

    while (i < 6)
    {
        cout << "Hello World\n";
        
        i++;// update expression
    }

    //do-while: runs once no matter expression is true or false
    int j = 2; // Initialization expression

    do
    {
        cout << "Hello World\n";

        j++;// update expression

    }  while (j < 1);

    // other way to make a loop
    int n = 1;
    label:
        cout << n << "\n";
        n++;
    if (n <= 5)
        goto label;

    return 0;
}