#include<iostream>
using namespace std;
/* Two types of header files
1) System header files: pre-defined header files that come with the compiler
2) User defined header files: Written by programmer
*/

int main(){
    int a = 10, b = 20;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++:"<<endl;
    // 1. Arithmetic Operators
    cout<<"The following are the arithmetic operators in C++:"<<endl;
    cout<<"The value of a + b is:"<<a + b<<endl;
    cout<<"The value of a - b is:"<<a - b<<endl;
    cout<<"The value of a * b is:"<<a * b<<endl;
    cout<<"The value of a / b is:"<<a / b<<endl;
    cout<<"The value of a % b is:"<<a % b<<endl;
    cout<<"The value of a++ is:"<<a++<<endl; // Post-increment
    cout<<"The value of ++a is:"<<++a<<endl; // Pre-increment
    cout<<"The value of a-- is:"<<a--<<endl; // Post-decrement
    cout<<"The value of --a is:"<<--a<<endl; // Pre-decrement
    cout<<endl;

    // 2. Comparison Operators
    cout<<"The following are the comparison operators in C++:"<<endl;
    cout<<"The value of a == b is:"<< (a == b) <<endl;
    cout<<"The value of a != b is:"<< (a != b) <<endl;
    cout<<"The value of a > b is:"<< (a > b) <<endl;
    cout<<"The value of a < b is:"<< (a < b) <<endl;
    cout<<"The value of a >= b is:"<< (a >= b) <<endl;
    cout<<"The value of a <= b is:"<< (a <= b) <<endl;
    cout<<endl;

    // 3. Logical Operators
    cout<<"The following are the logical operators in C++:"<<endl;
    cout<<"The value of this logical and operator (a == b) && (a < b) is:"<< ((a == b) && (a < b)) <<endl;
    cout<<"The value of this logical or operator (a == b) || (a < b) is:"<< ((a == b) || (a < b)) <<endl;
    cout<<"The value of this logical not operator !(a == b) is:"<< (!(a == b)) <<endl;


    return 0;
}