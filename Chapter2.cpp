/*
    👉 FUNCTIONS IN C++
*/

#include <bits/stdc++.h>
using namespace std;

// 👉 Function definition
void fun2() { // function definition, void means this function will not return anything
    cout << "  Inside fun2()\n";
}

void fun1() {
    cout << " Before fun2()\n";
    fun2(); // function call inside another function
    cout << " After fun2()\n";
}

int add(int x, int y) { // function definition with parameters and it returns an integer
    return x + y;
}

int product(int x, int y){
    static int z = 1; // static variable save the data in cache and don't change
    z = z + x * y;
    return z;
}

// declare a function as constexpr
constexpr int add_numbers(int a, int b) { // a constant function definition with parameters and it returns an integer
    return a + b;
}

// declare a function as inline // faster than normal function and used for small functions only
inline int add_numbers_inline(int a, int b) { // an inline function definition with parameters and it returns an integer
    return a + b;
}

// Fibonacci series using recursion function
int fib(int n)
{
	// Stop condition
	if (n == 0)
		return 0;

	// Stop condition
	if (n == 1 || n == 2)
		return 1;

	// Recursion function
	else
		return (fib(n - 1) + fib(n - 2));
}

// Tower of Hanoi using recursion function
void towerOfHanoi(int n, char from_rod, char to_rod,
    char aux_rod)
{
if (n == 0) {
return;
}
towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
cout << "Move disk " << n << " from rod " << from_rod
<< " to rod " << to_rod << endl;
towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {

    // 👉 Functions Basic Usage
    cout << "Before fun1()\n";
    fun1();
    cout << "After fun1()\n";
    cout<< add(10, 20) <<endl; // function call with parameters

    // Initialize variable n.
	int n = 5;
	cout<<"Fibonacci series of 5 numbers is: ";

	// for loop to print the fibonacci series.
	for (int i = 0; i < n; i++)
	{
		cout<<fib(i)<<" ";
	}

	// A, B and C are names of rods
    int N = 3;

	towerOfHanoi(N, 'A', 'C', 'B'); // A, B and C are names of rods, N is number of disks, A is source rod, C is destination rod and B is auxiliary rod, B is auxiliary rod

    // 👉 Basic important function
    string str = "Anmol";
    cout << "Length of string: " << str.length() << endl; // length of string
    cout << "Size of string: " << str.size() << endl; // size of string
    cout << "First character of string: " << str.front() << endl; // first character of string
    cout << "Last character of string: " << str.back() << endl; // last character of string
    cout << "Substring of string: " << str.substr(1, 3) << endl; // substring of string
    cout << "Find character in string: " << str.find('m') << endl; // find character in string
    cout << "Find string in string: " << str.find("nmo") << endl; // find string in string
    cout << "Reverse string: " << str.assign(str.rbegin(), str.rend()) << endl; // reverse string

    // 👉 Maths common function
    double pi = 3.14159;
    cout << "abs(-10) = " << abs(-10) << endl; // absolute value
    cout << "max(10, 20) = " << max(10, 20) << endl; // maximum value
    cout << "min(10, 20) = " << min(10, 20) << endl; // minimum value
    cout << "pow(2, 3) = " << pow(2, 3) << endl; // power of a number
    cout << "sqrt(16) = " << sqrt(16) << endl; // square root of a number
    cout << "ceil(2.3) = " << ceil(2.3) << endl; // round up a number
    cout << "floor(2.3) = " << floor(2.3) << endl; // round down a number
    cout << "round(2.3) = " << round(2.3) << endl; // round a number
    cout << "removing decimal from 1.8765 = "<< trunc(1.8765) <<endl; // remove decimal
    cout << "seting precision of pi to 3 digits = "<< setprecision(3) << pi << endl; // set precision of pi to 2
    cout << "log(2) = " << log(2) << endl; // natural logarithm
    cout << "log10(100) = " << log10(100) << endl; // base 10 logarithm
    cout << "exp(1) = " << exp(1) << endl; // exponential function
    cout << "sin(0) = " << sin(0) << endl; // sine function
    cout << "cos(0) = " << cos(15) << endl; // cosine function
    cout << "tan(0) = " << tan(30) << endl; // tangent function

    // 👉 Exception Handling
    int age = 15;

    cout<<"Age is: "<<age<<endl;

    try { // try block
        cout<<"Checking age..."<<endl;

        if (age >= 18) {
            cout << "Access granted - you are old enough." << endl;
        } else {
            throw(age); // throw exception
        }

    } catch (int myNum) { // catch block, catch exception as integer myNum
    //   catch (...) put "..." to catch any type of exception
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: " << myNum << " Required age is: 18" << endl;
    }

    return 0;
}