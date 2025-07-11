#include<iostream>

#include<iomanip>

using namespace std;

int main(){
    // // Constants in C++
    // const int a = 10; // Constant variable
    // cout<<"The value of a was:"<<a<<endl;
    // // a = 45; You will get an error if you try to change the value of a constant variable
    // cout<<"The value of a is: "<<a<<endl;


    // Manipulators in C++
    // int a = 5, b = 93 , c = 1234;
    // cout<<"The value of a is:"<<setw(4)<<a<<endl;
    // cout<<"The value of b is:"<<setw(4)<<b<<endl;
    // cout<<"The value of c is:"<<setw(4)<<c<<endl;

    // cout<<"The value of a is:"<<a<<endl;
    // cout<<"The value of b is:"<<b<<endl;
    // cout<<"The value of c is:"<<c<<endl;


    // Operator Precedence
    int a =3, b =4;
    // int c = (a*5)+b;
    int c = ((( (a*5)+b)-45)+87);
    cout<<c;
    return 0;
}