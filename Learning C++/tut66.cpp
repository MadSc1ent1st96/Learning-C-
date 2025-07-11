#include<iostream> 

using namespace std; 

template<class T1 = int, class T2 = float, class T3 = char>
class abc{
    public:
    T1 a;
    T2 b;
    T3 c;
    abc(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"The vale of a is "<< a <<endl;
        cout<<"The vale of b is "<< b <<endl;
        cout<<"The vale of c is "<< c <<endl;
    }
};
int main() {
    abc<> a(4, 6.4, 'c');
    a.display();
    cout<<endl;
    abc<float, char,char> b(4.3, 'p', 'c');
    b.display();

    return 0; 

}