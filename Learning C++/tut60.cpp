#include<iostream>
#include<fstream>

using namespace std; 

/*
The useful classes for working wiht files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

/*
In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
1. Using the constructor
2. Using the member function open() of the class
*/
int main() {
    string st =  "abcdefghijklmnopqrstuvwxyz";
    string st2;
    // Opening file using constructor and writing it
    // ofstream out("tut60_sample.txt"); // Write operation
    // out<<st;
    // Opening file using constructor and reading it

    ifstream in("tut60_sampleB.txt"); // read operation
    // in>>st2;
    getline(in, st2);
    getline(in, st2);
    cout<<st2;

    return 0; 
}