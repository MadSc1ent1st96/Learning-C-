#include <iostream>

using namespace std;

class complex; // Forward declaration of class complex

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex
{
    int a;
    int b;
    // Individually declaring functions as friend
    // friend int Calculator ::sumRealComplex(complex o1, complex o2);
    // friend int Calculator ::sumCompComplex(complex o1, complex o2);

    // Aliter : Declaring the entire class Calculator as a friend
    friend class Calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 3);
    o2.setnumber(2, 4);

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real parts of o1 and o2 is " << res << endl;
    cout << "The sum of complex parts of o1 and o2 is " << calc.sumCompComplex(o1, o2) << endl;

    return 0;
}