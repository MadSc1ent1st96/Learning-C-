#include<iostream>
using namespace std;

int main(){
    /*  Loops in C++:
        1. For Loop
        2. While Loop
        3. Do-While Loop
    */
    /* For loop in C++ */
    // int i = 1;
    // Syntax for loop:
    // for(initialization; condition; updation){Loop body(C++ Body)}
    // for (int i = 1 ; i <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }
    // Infinite For Loop:
    // for (int i = 1; 34 <= 40; i++){
    //     cout<<i<<endl;
    // }

    /* While Loop in C++ */
    // Syntax: 
    /* while(condition)
    {
        C++ Statements
    }*/
    // int i = 1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Infinite while loop:
    // while(true){
    //    cout<<i<<endl;
    //    i++;}
    // int i = 1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=20);


    int i = 1;
    for(i = 1; i <= 10; i++){
        cout<<"The multiplication table of 6 is:"<<6 * i<< endl;
        
        }
      

    return 0;
}