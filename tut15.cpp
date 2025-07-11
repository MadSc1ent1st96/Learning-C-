#include<iostream> 

using namespace std; 


// Function prototype
// type function-name (Arguments);

int sun(int a, int b);

int main() {
    int num1, num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;

    cout<<"The sum is "<< sun(num1, num2) << endl;
    return 0; 

}

int sun(int a, int b){
    int c = a+b;
    return c;
}
