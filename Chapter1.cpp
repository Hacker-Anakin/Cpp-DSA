/*
    BASIC PROGRAMMING CONCEPTS IN C++
*/

#include <iostream> // This is a header file that includes input output functions
#include <bits/stdc++.h> // This is a universal header file that includes every standard library, if you use this header file you don't need to include other header files like iostream, vector, etc.

namespace first // Namespace named first, namespace is used to avoid name conflicts
{
    int val = 100;
}

// Using std namespace
using namespace std;
// using namespace first; // This will use the namespace first and you don't need to use first::val to access the variable val directly you can use val

// Main() function: where the execution of program begins
int main()
{
    // prints hello world
    cout << "Hello World" << endl; // endl is used to print a newline character
    
    int value = 0; // variable definition

    cout<< value <<endl; // prints the value of variable value
    cout<< first::val <<endl; // prints the value of variable value in namespace first

    first::val = 200; // Accessing the variable val from namespace first

    cout<< first::val <<endl; // prints the value of variable value in namespace first

    return 0;
}