#include<iostream>


using namespace std;

int c = 80;

int main(){

    // ***************Literals Build in data types********************
    // int a,b,c;
    // cout<<"Enter the value of a:";
    // cin>>a;
    // cout<<"Enter the value of b:";
    // cin>>b;
    // c = a + b;
    // cout<<"c is the sum of a and b:"<<c<<endl;
    // cout<<"The global c is:"<< ::c<<endl;

    //  ***************Float, double and long double Literals********************

    // float d = 20.2f;
    // long double e = 20.2l;
    // cout<<"The size of 20.2 is :"<<sizeof(20.2)<<endl;
    // cout<<"The size of Float 20.2f is:"<<sizeof(20.2f)<<endl;
    // cout<<"The size of long Double 20.2l is:"<<sizeof(20.2l)<<endl;
    // cout<<"The size of long Double 20.2L is:"<<sizeof(20.2L)<<endl;
    // cout<<"The size of Float 20.2F is:"<<sizeof(20.2F)<<endl;


    // cout<<"The value of d is:"<<d<<endl;
    // cout<<"The value of e is:"<<e<<endl;

    //  ***************Referance variables********************
    // float x = 608;
    // float & y = x; // y is a referance variable to x
    // cout<<x<<endl;
    // cout<<y;

    // ****************Typecasting********************
    int k = 90;
    float l = 90.9;
    cout<<"The value of float k is:"<<(float)k<<endl;
    cout<<"The value of int k is:"<<(int)k<<endl;
    cout<<"The value of int l is:"<<(int)l<<endl;
    cout<<"The value of float l is:"<<(float)l<<endl;
    cout<<"The expression is: "<< k + l<<endl;
    cout<<"The expression is: "<< k + int(l)<<endl;
    cout<<"The expression is: "<< k + (int)l<<endl;


    return 0;
}