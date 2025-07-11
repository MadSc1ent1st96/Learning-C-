#include <iostream>

using namespace std;

// Base Class
class Employee
{
    

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived Class Syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// { class members / methods/etc...};

// 1. Default visibility mode is private in C++
// 2. Private visibility mode : Public members of base class become private members of derived class.
// 3. Public visibility mode : Public members of base class become public members of derived class.
// 4. Private memebers are never inherited.

// Creating a Programmer class derived from Employee class
class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{

    Employee a(1), ab(2), abc(3);
    cout << a.salary << endl;
    cout << ab.salary << endl;

    Programmer skillf(10);
    cout << skillf.languageCode << endl;
    cout << skillf.id << endl;
    skillf.getData();
    return 0;
}