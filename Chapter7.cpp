/*
    👉 STL - Vector, Queue & Stack
*/

#include <iostream>
#include <vector> //vectors are dynamic unlike arrays which are constant, i.e, we are add and remove elements from a vector
#include <queue> // no-index and follows FIFO
#include <deque> // no-index and follows FIFO double linked queue, i.e, we can add/remove items from front and from back and also access through indexes
#include <stack> // no-index and follows LIFO
#include <list> // NOT SO USED; double linked list, i.e, we can add/remove items from front and from back also but can't access through indexes
using namespace std;

int main(){
    // 👉 Vectors
    vector<int> v; // Declare a vector of integers size 0
    v = {1, 2, 3, 4, 5}; // Initialize the vector with 5 elements

    // Initializing a vector with an array
    int arr[] = { 10, 20, 30 };
	int n = sizeof(arr) / sizeof(arr[0]);

	vector<int> vect(arr, arr + n);

    cout << "Is vector empty: " << v.empty() << endl; // Output: 0 (false)
    cout << "Size of vector: " << v.size() << endl; // Output: 5
    cout<<"Capapcity: "<<v.capacity() << endl; // capacity = 5 as max no. of value held by v = 5

    v.clear(); // Remove all elements from the vector

    v = {1, 2, 3, 4, 5}; // Reassign the vector with 5 elements because we cleared it.

    for (vector<int>::iterator i = v.begin(); i != v.end(); i++) // Making an Iterator (pointer) for vector and looping for items in v
    {
        cout << *(i) <<" ";
    }
    cout<<"\n";
    // The above operation can also be performed like this:
    // for(int var : v)
    // {
    //     cout << var <<" ";
    // }
    // cout<<"\n";
    
    //* Accessing
    cout << "First element: " << v.front() << endl; // Output: 1
    cout << "First element: " << *(v.begin()) << endl; // Output: 1
    cout << "Last element: " << v.back() << endl; // Output: 5
    cout << "Element at index 2: " << v.at(2) << endl; // Output: 3, can also do v[2]

    //* Adding
    v.push_back(10); // Add an element to the end of the vector
    v.insert(v.begin() + 2, 7); // Insert 7 at index 2

    //* Assigning and Resizing
    v.at(4) = 7; // change elements at indexes 4
    v.resize(10); // Resize the vector to 10 elements all extra values equal 0
    v.resize(5); // Resize the vector to 5 elements
    v.assign(5, 10); // Assign 5 elements with value 10
    v.assign({1, 2, 3, 4, 5}); // Assign 5 elements with values 1, 2, 3, 4, 5, Reassigning as the values are now 10 10 10 10 10
    
    //using for loop to change and print the values
    for(int &var : v)
    {
        var = var*10;
        cout << var <<" ";
    }
    cout<<"\n";

    //* Removing
    v.pop_back(); // Remove the last element from the vector
    v.erase(v.begin() + 3); // Remove element at index 3 and index 4
    cout<<"Capapcity: "<<v.capacity()<<endl; // capacity = 10 as max value no. of held by v = 10 line 37 and the memory is not freed

    // 👉 Queue
    queue<int> q; //create a queue
    // queue<char> q = {'a', 'b', 'c'}; // Error: cannot create a queue of      characters with initial values
    q.push(1); // push elements into the queue
    q.push(2);
    q.push(5);

    q.pop();

    cout <<"Size of Queue = " <<q.size() << endl;

    //* Accessing
    int back = q.back();
    int front = q.front();

    cout<<front<<endl;
    cout<<back<<endl;

    //* Swapping
    queue<int> q2;
    q2.swap(q); // swap all the elements of s2 with s

    //* Printing
    // print elements of stack
     while(!q2.empty()) { //Unlike vectors or other containers, we cannot use a ranged for loop to iterate through a stack. 
      cout << q2.front() << ", ";
      q2.pop();
    }
    cout<<endl;

    // 👉 Deque
    deque<int> d1 {1, 2, 3, 4, 5};

    d1.push_back(1); // d1 = 1, 2, 3, 4, 5, 1
    d1.push_front(3); // d1 = 3, 1, 2, 3, 4, 5, 1

    d1.pop_back(); // d1 = 3, 1, 2, 3, 4, 5
    d1.pop_front(); // d1 = 1, 2, 3, 4, 5

    //* Printing
    // display elements of deque
    for (int num : deque1) {
        cout << num << ", ";
    }
    cout<<endl;

    //* Accessing
    cout<<d1[3]<<endl; // Output: 4
    cout<<d1.at(3)<<endl; // Output: 4

    cout <<"Size of Priority Queue = " <<pq.size() << endl;
    // 👉 Stack
    stack<char> s; // create a stack of characters
    // stack<char> s = {'a', 'b', 'c'}; // Error: cannot create a stack of      characters with initial values

    s.push('a'); // push elements into the stack
    s.push('b');
    s.push('c');

    s.pop();

    cout <<"Size of Stack = " <<s.size() << endl;

    //* Accessing
    char top = s.top();

    cout<<top<<endl;

    //* Swapping
    stack<char> s2;
    s2.swap(s); // swap all the elements of s2 with s

    //* Printing
    // print elements of stack
     while(!s2.empty()) { //Unlike vectors or other containers, we cannot use a ranged for loop to iterate through a stack. 
      cout << s2.top() << ", ";
      s2.pop();
    }
    cout<<endl;

    // 👉 Lists
    list<int> l; // l = 0
    l.push_back(1); // l = 1
    l.push_front(3); // l = 3,1

    l.pop_back(); // l = 3
    l.pop_front(); // l = 0

    l = {1, 3, 5, 99, 12};

    // cout<<l[3]<<endl; This throws an error as list can't be accessed 

    // rest remian similar to vector

    // 👉 Pair
    pair<int, char> p = {2, 'a'};// 2 different or same value together
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int, char>> np = {1, {2, 's'}}; // nested pair
    cout<<np.first<<" "<<np.second.first<<" "<<np.second.second<<endl;

    // Vector of pairs
    vector<pair<int, int>> vp = {{1, 2}, {3, 4}};
    vp.push_back({5, 6});
    cout<<vp[2].first<<" "<<vp[2].second<<endl;

    return 0;
}