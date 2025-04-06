/*
    👉 STL - Map & Set
*/

#include <iostream>
#include <map> // Map is a collection of key-value pairs, where each key is unique also sorts automatically.
#include <unordered_map> // Unordered Map is a map, but don't sort automatically.
#include <set> // Set has unique items also sorts automatically.
#include <unordered_set> // Set with unique items, but don't sort automatically.
using namespace std;

int main(){
    // 👉 Map
    map<int, string> m = {{0, "Name"}}; // Declare a map with key as integer and value as string

    // * Inserting
    // Insert key-value pairs into the map
    m.insert({1, "Anmol"}); // Insert key-value pair with key 1 and value "Anmol"
    m[3] = "Rohit"; // Insert key-value pair with key 3 and value "Rohit"
    m.insert(make_pair(4, "Sharma")); // Insert key-value pair with key 4 and value "Sharma"
    m.insert({2, "Raj"}); // Insert key-value pair with key 2 and value "Raj"
    //* even if 2 is inserted after 3, it will be sorted automatically


    // * Accessing
    cout << m.find(0)->second << endl; // Output: Name
    cout << m[1] << endl; // Output: Anmol
    cout << m.at(2) << endl; // Output: Raj

    // * Size
    cout << "Size of map: " << m.size() << endl; // Output: 3

    // * Erasing
    m.erase(0); // Remove key-value pair with key 0
    m.erase(m.find(4)); // Remove key-value pair with key 4

    // * Printing
    // declare map iterator
    map<int, string>::iterator iter;

    // use iterator to display map elements
    for (iter = m.begin(); iter != m.end(); ++iter) {
        cout << iter->first << " - " << iter->second << endl;
    }

    //alternative way to print
    // for (auto &var : m)
    // {
    //     cout << var.first << " - " << var.second << endl;
    // }

    // 👉 Multimap
    multimap<int, string> mm = {{134, "Burger"}, {134, "Burger"}, {134, "Taco"}, {1900, "Pizza"}, {1900, "Chesse Pizza"}, {12, "Fries"}}; // Declare a multimap with key as integer and value as string

    for(auto var : mm)
    {
        cout<<var.first<<" - "<<var.second<<", ";
    }
    cout<<endl;

    // 👉 Unordered Map
    unordered_map<char, int> um = {{'a', 1}, {'b', 2}, {'d', 4}, {'c', 3}}; // Declare a map with key as characters and value as integers

    for(auto var : um)
    {
        cout<<var.first<<" - "<<var.second<< ", ";
    }
    cout<<endl;

    // 👉 Unordered Multi Map
    unordered_multimap<int, string> umm {{1, "Apple"}, {22, "Banana"}, {1, "Apricot"}, {3, "Avocado"}}; // Declare a map with key as integers and value as strings

    for(auto var : umm)
    {
        cout<<var.first<<" - "<<var.second<< ", ";
    }
    cout<<endl;
    
    // 👉 Sets
    set<int>s = {1,34,5,6,74,1}; // 1 being repeated is only counts once

    // Sort a Set in Descending Order
    set<int, greater<int>> s1 = {1,34,5,6,74,1};

    // * Inserting
    // Insert into set
    s.insert(2); // Insert 2 into the set
    s.insert(3); // Insert 3 into the set


    // * Accessing
    // cout<<s[2]<<endl; // This will throw an error as set can't be accessed using [] operator

    // * Size
    cout << "Size of set: " << s.size() << endl; // Output: 5

    // * Erasing
    s.erase(1); // Remove 1 from the set
    // s.clear(); // Remove all elements from the set

    // * Printing
    for(int val : s) {
        cout << val << " ";
    }
    cout << endl;

    // 👉 Multiset
    multiset<char> ms = {'a', 'b', 'c', 'a'}; // Allows duplicate.

    // Sort a Set in Descending Order
    multiset<int, greater<int>> ms1 = {1,34,5,6,74,1};

    // * Inserting
    // Insert into set
    ms.insert('2'); // Insert '2' into the set
    ms.insert('3'); // Insert '3' into the set


    // * Accessing
    // cout<<ms[2]<<endl; // This will throw an error as set can't be accessed using [] operator
    cout<<ms.count('a')<<endl;

    // * Size
    cout << "Size of set: " << ms.size() << endl; // Output: 5

    // * Erasing
    ms.erase('a'); // Remove a from the set
    // ms.clear(); // Remove all elements from the set

    // * Printing
    for(int val : ms) {
        cout << val << " ";
    }
    cout << endl;

    // 👉 Unordered set
    unordered_set<int> us = {5, 3, 8, 1, 3};

    // Cannot sort a Set in Descending Order, this will throw an error
    // unordered_set<int, greater<int>> us1 = {1,34,5,6,74,1};

    // * Inserting
    // Insert into set
    us.insert(2); // Insert '2' into the set
    us.insert(3); // Insert '3' into the set


    // * Accessing
    // cout<<ms[2]<<endl; // This will throw an error as set can't be accessed using [] operator

    // * Size
    cout << "Size of set: " << us.size() << endl; // Output: 5

    // * Erasing
    us.erase(1); // Remove 1 from the set
    // us.clear(); // Remove all elements from the set

    // * Printing
    for(int val : us) {
        cout << val << " ";
    }
    // 👉 Unordered Multiset
    unordered_multiset<int> ums = {5, 3, 8, 1, 3};

    // * Inserting
    // Insert into set
    ums.insert(2); // Insert '2' into the set
    ums.insert(3); // Insert '3' into the set


    // * Accessing
    // cout<<ms[2]<<endl; // This will throw an error as set can't be accessed using [] operator
    cout<<ms.count(3)<<endl;

    // * Size
    cout << "Size of set: " << ums.size() << endl; // Output: 5

    // * Erasing
    ums.erase(1); // Remove 1 from the set
    // ums.clear(); // Remove all elements from the set

    // * Printing
    for(int val : ums) {
        cout << val << " ";
    }
    return 0;
}