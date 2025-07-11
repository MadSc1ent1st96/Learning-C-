#include<iostream> 

using namespace std; 

int main() {
    // for (int i = 0; i < 40; i++)
    // {
    //     if(i == 2){
    //         break;
    //     }
    //     cout << "The value of i is: " << i << endl;
    // }
    for (int i = 0; i < 40; i++)
    {
        if(i == 2){
            continue;
        }
        cout << "The value of i is: " << i << endl;
    }
     

    return 0; 

}