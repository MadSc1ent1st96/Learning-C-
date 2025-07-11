#include <iostream>

using namespace std;

class complex
{
    int a;
    int b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as that of the class.
    // It is used to initialize the objects of the class.
    // It is automatically invoked whenever an object is created.
    complex(void); // Constructor declaration
    void printnumber()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void) // --> This is a default constructor as it accepts no parameters
{
    a = 0;
    b = 0;
   
}

int main()
{

    complex c;
    c.printnumber();

    return 0;
}


// Characteristics of Constructors:

// 1. It should be declared in the public section of the class.
// 2. They are automatically invoked when an object is created.
// 3. Do not have a return type, not even void. (They cannot return values) 
// 4. It can have default arguments.
// 5. We cannot refer to their address.