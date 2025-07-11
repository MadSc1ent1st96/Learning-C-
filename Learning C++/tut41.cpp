#include <iostream>

using namespace std;

// Syntax for inheriting in multiple inheritance
// class DerivedC : visibility-mode base1, visibility-mode base2
// {
//     Class body of class DerivedC
// };

class Base1
{
protected:
    int base1int;

public:
    void setBase1int(int b1)
    {
        base1int = b1;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void setBase2int(int b2)
    {
        base2int = b2;
    }
};

class Derived : public Base1, public Base2
{

public:
    void show()
    {
        cout << "The value of Base1 is: " << base1int << endl;
        cout << "The value of Base2 is: " << base2int << endl;
        cout << "The sum of Base1 and Base2 is: " << base1int + base2int << endl;
    }
};
int main()
{   Derived a;
    a.setBase1int(40);
    a.setBase2int(5);
    a.show();
    
    return 0;
}