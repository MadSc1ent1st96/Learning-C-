#include<iostream> 

using namespace std; 

int factorial(int n){
    if (n<=1){
        return 1;
    } else {
        return n * factorial(n - 1);
    }
    // return n * factorial(n-1);
}

int fibonacci(int n){
    if (n < 2){
        return 1;
    }
 
    return (fibonacci(n-2) + fibonacci(n - 1));
}

int main() {
    int n;
    cout<<"Enter a number to calculate its factorial: "<<endl;
    cin>>n;

    // cout<<"The factorial of the required number is: "<<factorial(n)<<endl;
    
    cout<<"The Fibonacci series up to the number "<<n<<" is: "<< fibonacci(n) <<endl;

    return 0; 

}