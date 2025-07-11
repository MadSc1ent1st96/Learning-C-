#include <iostream>

using namespace std;

/*
Case 01:
class B : public A{
    Order of execution of constructor --> first A() then B()
};

Case 02:
class A : public B, public C {
        // Order of execution of constructor --> B() then C() and A()
};

Case 03:
class A : public B, virtual public C {
        // Order of execution of constructor --> C() then B() and A()
};


*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 case constructor called" << endl;
    }
    void printDataBase1(void)
    {
        cout << "The value of data is: " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 case constructor called" << endl;
    }
    void printDataBase2(void)
    {
        cout << "The value of data is: " << data2 << endl;
    }
};

class Derived : public Base2, public Base1{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printDataDerived(void)
    {
        cout << "The value of derived1 is: " << derived1 << endl;
        cout << "The value of derived2 is: " << derived2 << endl;
    }
};

int main()
{ 
    Derived abc(1,2,3,4);
    abc.printDataBase1();
    abc.printDataBase2();
    abc.printDataDerived();
    return 0;
}