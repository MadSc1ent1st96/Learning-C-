#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    // Selection control structure: If else-if else ladder
    // if((age<18) && (age>0)){
    //     if(age<10){
    //         cout<<"Kid bro..."<<endl;
    //     }
    //     else{
    //     cout<<"You cannot come to my party"<<endl;
    //     }

    // }
    // else if(age ==18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }

    // Selection control structure: Switch case statements 
    switch(age)
    {
    case 18:
        cout<<"You are 18";
        break;

    case 22:
        cout<<"You are 22";
        break;

    case 2:
        cout<<"You are 2";
        break;
    
    default:
    cout<<"No special cases"<<endl;
        break;

    }
       
    cout<<"Done with switch case"<<endl;
    return 0;
}