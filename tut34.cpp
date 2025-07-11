#include <iostream>

using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }

    // When no copy constructor is found, the compiler provides a default copy constructor.
    number(number &obj)
    {
        cout << "Copy constructor called." << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number is: " << a << endl;
    }
};

int main()
{
    number x, y, z(45);
    z.display();
    y.display();
    x.display();
    // z1 should exactly resemble z or y or x.
    number z1(x), z2(y), z3(z), z4;  // Copy constructor invoked
    z1.display();
    z2.display();
    z3.display();

    z4 = z; // Copy constructor not called
    z4.display();

    number z5 = z;
    z5.display(); // Copy constructor not called

    return 0;
}