#include<iostream> 

using namespace std; 

class BaseClass{
    public:
    int var_base = 1;
    virtual void display(){
        cout<<"1 Displaying the Base Class variable var_base "<< var_base << endl;
    }
};

class DerivedClass : public BaseClass{
    public:
    int var_derived = 2;
    void display(){
        cout<<"2 Displaying the Base Class variable var_derived "<< var_base << endl;
        cout<<"2 Displaying the Derived Class variable var_derived "<< var_derived << endl;
    }
};

int main() {
    BaseClass * base_class_pointer;
    BaseClass obj_base;     
    DerivedClass obj_derived;     
    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    return 0; 

}