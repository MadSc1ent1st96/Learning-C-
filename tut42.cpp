#include<iostream> 
#include<cmath>

using namespace std; 

/* Create two classes
    1. Simple Calculator - Takes input of two numbers using a utility function and performs +, -, *, / and displays the result using another function
    2. Scientific Calculator - Takes input of two numbers using a utility function and performs any four scientific operation of your choice and displays the result using another function

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of inheritance are you using?
    Q2. Which mode of inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scietific calculator
    Q4. How is code reusability implemented?
*/

class Simple_Calculator{        
    public:
    int a, b;
    char c;
        void display(int a, int b, char c);
              
};

void Simple_Calculator:: display(int a, int b, char c){
    // char c = c;
    if (c == 'a')
        cout<< a + b;
    else if (c == 's')
        cout<< a - b;
    else if (c == 'm')
        cout<< a * b;
    else if (c == 'd')
        cout<< a/b;
        // {if (b = 0){
        //     cout<< 0;}   // Not works
        // else{
        //     cout<< a/b;}}
}




class Scientific_Calculator{
    public:
    int a, b;
    char c;
        void display(int a, int b, char c){
            if (c == 'i')
                cout<<"The value of sin for both the numbers is: "<< sin(a) << " and " << sin(b);
            else if (c == 'c')
                cout<< "The value of cos for both the numbers is: "<< cos(a) << " and "<< cos(b);
            else if (c == 'q')
                cout<< "The value of square root for both the numbers is: "<< sqrt(a) << " and "<< sqrt(b);
            else if (c == 'u')
                cout<< "The value of cube root for both the numbers is: "<< cbrt(a) << " and "<< cbrt(b);
            else if (c == 'l')
                cout<< "The value of Log for both the numbers is: "<< log(a) << " and "<< log(b);
        }
};

class Hybrid_Calculator : public Simple_Calculator, public Scientific_Calculator{
    public:
        void display(int a, int b, char c){
            Scientific_Calculator::display(a, b, c);
            Simple_Calculator:: display(a, b, c);
            cout<<endl<<"Finished";
        }
};

int main() {
    Hybrid_Calculator First;
    int a, b;
    char c;
    cout << "Type the Two number on which operation will happen, Followed by the first letter of the alphabet of the operation (a for additon, s for subtraction, m for multiplication, d for division, i for sin, c for cos, q for square root, u for cube root and l for log )";
    cin>>a>>b>>c;
    
   // Call Simple_Calculator's display for basic operations
   //First.Simple_Calculator::display(a, b, c);
   // Call Scientific_Calculator's display for scientific operations
   // First.Scientific_Calculator::display(a, b, c);    

    First.display(a, b, c);
    return 0; 
}