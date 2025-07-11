#include<iostream> 

using namespace std; 

class Base{
    protected:
        int a;

    private:
        int b;

};
/*  For a protected member:
                            Public derivation    Protected derivation    Private derivation
    1. Private members        Not inherited         Not inherited           Not inherited
    2. Protected members      Protected members      Protected members      Private members
    3. Public members         Public members        Protected members      Private members

*/

class Derived: protected Base{

};

int main() {
    Base b;
    Derived d;
    // cout<<d.a<<endl; // This will give an error because 'a' is protected in Base class and Derived

    return 0; 

}