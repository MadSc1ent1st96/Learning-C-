#include<iostream> 

using namespace std; 

class complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main() {
    // complex C1;
    // complex *ptr = &C1;
    complex *ptr = new complex;
    // C1.setData(1,4);
     // C1.getData();

    // (*ptr).setData(1,4);   is exactly same as 
    // ptr->setData(1,4);
    // (*ptr).getData(); is as good as 
    // ptr->getData();

// Array of objects:
    complex *ptr1 = new complex[4];

    // (*ptr).setData(1,4);   is exactly same as 
    ptr1->setData(1,4);
    // (*ptr).getData(); is as good as 
    ptr1->getData();
    
   


    return 0; 

}