#include<iostream> 

using namespace std; 

int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap the values of x and y in main
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}


// Call by reference using pointers
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using C++ reference variables
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
     int x = 4, y = 5;
     // cout<<"The sum of 4 and 5 is "<<sum(a, b);
     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
     // swap(x, y);   This will not swap the values of x and y in main
     // swapPointer(&x, &y); This will swap a and y using pointers
        swapReferenceVar(x, y); // This will swap x and y using reference variables
     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    return 0; 

}