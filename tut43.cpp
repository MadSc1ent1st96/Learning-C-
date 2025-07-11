#include<iostream> 

using namespace std; 

class Base1{
    public:
        void greet(){
            cout<<"How are you??"<< endl;
        }
};

class Base2 {
    public:
        void greet(){
            cout<<"Kaise Ho??"<< endl;
        }
};

class Derived : public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base2::greet();
        }
};

class B{
    public:
        void say(){
            cout<<"Hello World!!"<<endl;
        }
};

class D : public B {
    int a;
    public:
        // D's say() method will overwrite base class's say() method
        void say(){
            cout<<"Hello People!!"<< endl;
        }
};

int main() {
    // Ambiguity 1
    // Base1 base1obj;   
    // Base2 base2obj;   

    // base1obj.greet();
    // base2obj.greet();

    // Derived d;
    // d.greet();

    // Ambiguity 2

    B b;
    b.say();

    D d;
    d.say();

    return 0; 

}