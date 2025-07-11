#include<iostream> 

using namespace std; 

inline int product(int a, int b){
    // Not recommended to use inliine func when static variables are involved.
    // static int c=0; // This executes only once
    // c = c+1;  // Next time this func is run, the value of c will be retained
    // return a*b + c;
    return a*b;
}

float moneyreceived(int currentmoney = 100, float factor = 1.04){
    return currentmoney * factor;
}

int main() {
    int a, b;
    //  cout<<"Type the value of a and b"<<endl;
    //  cin>>a>>b;
    //  cout<<"The product of a and b is: "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<< money<<" Rs in your bank account, you will receive "<<moneyreceived(money)<< "Rs after a year"<<endl;
    cout<<"For VIP: If you have "<< money<<" Rs in your bank account, you will receive "<<moneyreceived(money, 1.1)<< "Rs after a year"<<endl;
    return 0; 

}