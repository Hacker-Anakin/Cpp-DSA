/*
    👉 ARRAYS, STRINGS AND POINTERS
*/

#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n) // passing array as argument and size of array
{
    arr[0] = 60; // changing the value of array
    arr[1] = 20;
    for (int i = 0; i < n; i++) // printing array
        cout << arr[i] << " ";
    cout << endl;
}

int main(){

    // 👉 Arrays Declarations
    int arr[] = { 10, 20, 30, 40 }; // Array of integers with size 4
    int arr2[6] = { 10, 20, 30, 40 }; // Compiler initializes the last 2 elements as 0
    print(arr, 4);

    for (int n : arr) // for-each loop to print all elements of array
    {
        cout << n << " ";
    }
    cout << endl;

    // Multi-dimensional array
    int x[3][2] = {{0,1}, {2,3}, {4,5}}; // an array with 3 rows and 2 columns.
    
    // 👉 String
    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName); // Reads a full line of input correctly
    cout << "Your name is: " << fullName << endl;

    string str = "Hello World!";
    cout << "At index [1]: " << str.at(1) << endl;
    cout << "Size of str: " << str.size() << endl;
    cout << "Slicing the string: " << str.substr(6, 5) << endl; // substr(starting Index, length)

    // Finding
    int pos; // return first index
    pos = str.find("l");
    cout << "Finding \"l\" in the string: " << pos << endl;

    // Accessing & Copying
    char firstchar = str[0]; // H
    int length_of_str = str.length(); // 11  also works for str.size(); // 11

    cout<<"First character: "<<firstchar<<endl;
    cout<<"Length of string: "<<length_of_str<<endl;

    char ch[6]; // Create a character array to store copied substring
    str.copy(ch, 5, 0); // Copy first 5 characters into ch
    ch[5] = '\0'; // Null-terminate the string
    cout << "Copied substring: " << ch << endl;

    // Modifying
    str = "Hello World!";
    str.replace(6, 5, "Cats"); // Hello Cats!
    str.insert(5, " Black"); // Hello Black Cats!
    str.erase(5, 6); // Hello Cats
    str.push_back('!'); // Hello Cats!
    str.pop_back(); // Hello Cats! -> removes last character i.e. '!'
    str.resize(3); // Hello Cats! -> Hel // only 3 characters

    // Changing Case
    for (char &c : str) { // Use reference to modify the original string
        c = toupper(c);
    }
    cout << str << endl;

    // Displaying string
    cout << "The string using forward iterators is : ";
    for (auto it = str.begin(); it != str.end(); it++)
        cout << *it;
    cout << endl;

    // Displaying reverse string
    cout << "The reverse string using reverse iterators is : ";
    for (auto it1 = str.rbegin(); it1 != str.rend(); it1++)
        cout << *it1;
    cout << endl;

    // Formatting
    cout << setw(8) << "Number 1: " << setw(10) << 100 << endl;
    cout << setw(8) << "Number 2: " << setw(10) << 10 << endl;

    // 👉 POINTERS
    // * -> Pointer (dereference) operator, & -> Address-of operator
    char a = 'e'; // declare variable a
    char *b = &a; // declare pointer variable b = address of a
    char **c = &b; // declare pointer variable c = address of b
    char ***d = &c; // declare pointer variable d = address of c

    cout << "Value of a: " << a << " = ";
    cout << "Value of a - stored in b: " << *b << endl;
    cout << "Address of a: " << &a << " = ";
    cout << "Address of a - stored in b: " << (void*)b << endl;

    cout << "Value of b: " << *b << " = ";
    cout << "Value of b - stored in c: " << **c << endl;
    cout << "Address of b: " << &b << " = ";
    cout << "Address of b - stored in c: " << (void*)c << endl;

    return 0;
}
