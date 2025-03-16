/*
    👉 STL - Vector, Queue & Stack
*/

#include <iostream>
#include <vector> //vectors are dynamic unlike arrays which are constant, i.e, we are add and remove elements from a vector
using namespace std;

int main(){
    // 👉 Vectors
    vector<int> v; // Declare a vector of integers size 0
    v = {1, 2, 3, 4, 5}; // Initialize the vector with 5 elements
    v.push_back(10); // Add an element to the end of the vector
    v.pop_back(); // Remove the last element from the vector
    v.insert(v.begin() + 2, 7); // Insert 7 at index 2
    v.erase(v.begin() + 3); // Remove element at index 3
    v.clear(); // Remove all elements from the vector
    v.resize(10); // Resize the vector to 10 elements
    v.resize(5); // Resize the vector to 5 elements
    v.assign(5, 10); // Assign 5 elements with value 10
    v.assign({1, 2, 3, 4, 5}); // Assign 5 elements with values 1, 2, 3, 4, 5
    v = {1, 2, 3, 4, 5}; // Reassign the vector with 5 elements

    cout << "Size of vector: " << v.size() << endl; // Output: 5
    cout << "Capacity of vector: " << v.capacity() << endl; // Output: 5
    cout << "Element at index 2: " << v.at(2) << endl; // Output: 3
    cout << "First element: " << v.front() << endl; // Output: 1
    cout << "Last element: " << v.back() << endl; // Output: 5
    cout << "Is vector empty: " << v.empty() << endl; // Output: 0 (false)
    cout << "Element at index 2: " << v.at(2) << endl; // Output: 3, can also do v[2]

    return 0;
}