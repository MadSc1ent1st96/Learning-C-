#include<iostream> 

using namespace std; 


class c2;

class c1{
    int val1;
    friend void exchange(c1 &, c2 &); 
    public:
        void indata(int a){
            val1 =a;
        }
        void display(void){
            cout<<"The value of val is "<<val1<<endl;
        }
};

class c2{
    int val2;
    friend void exchange(c1 &, c2 &);
    public:
        void indata(int b){
            val2 = b;
        }
        void display(void){
            cout<<"The value of val2 is "<<val2<<endl;
        }
};

void exchange(c1 &x, c2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main() {
    c1 oC1;
    c2 oC2;

    oC1.indata(10);
    oC2.indata(20);
    exchange(oC1, oC2);

    cout<< "The value of c1 after exchanging becomes: ";
    oC1.display();
    cout<< "The value of c2 after exchanging becomes: ";
    oC2.display();

    return 0; 

}