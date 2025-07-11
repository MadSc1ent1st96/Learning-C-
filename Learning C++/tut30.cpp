#include<iostream> 

using namespace std; 

class complex
{
    int a;
    int b;

public:
    complex(int, int); 
    void printnumber()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y) // --> This is a parametrized constructor as it takes two parameters
{
    a = x;
    b = y;
   
}

int main() {
    // implicit call
    complex a(4,6);

    // Explicit call
    complex b = complex(5,7);

    a.printnumber();
    b.printnumber();

    return 0; 

}