/*
    👉 FILE HANDLING IN C++
*/

#include <iostream>
#include <fstream>  // Required for file handling
using namespace std;

int main(){

    // 👉 Writing to a File
    ofstream outFile("output.txt");  // Open-file-stream to write in a file

    if (!outFile) {  // Check if the file is opened successfully
        cerr << "Error opening file!" << endl;
        return 1;
    }

    outFile << "Hello, this is a test file.\n";  // Writing to file
    outFile << "File handling in C++ is easy!\n"; // Writing to file

    outFile.close();  // Close the file
    cout << "Data written to file successfully!" << endl;

    // 👉 Reading from a File
    cout<<"Reading data from file"<<endl;

    ifstream inFile("output.txt");  // Open-file-stream to read from a file

    if (!inFile) {  // Check if the file is opened successfully
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {  // Read line by line from file
        cout << line << endl;  // Print the line
    }

    inFile.close();  // Close the file

    // 👉 Appending to a File
    cout<<"Appending data to a file."<<endl;

    ofstream outFile("example.txt", ios::app); // Open-file-stream to write in a file in append mode

    if (!outFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    outFile << "Appending new data to the file.\n";  
    outFile.close();

    cout << "Data appended successfully!" << endl;


    return 0;
}