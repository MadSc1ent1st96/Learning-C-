#include<iostream> 

using namespace std; 

int main() {
    int marks[] = {23, 45, 67, 89, 12};
    int mathmarks[4];
    mathmarks[0] = 5;
    mathmarks[1] = 2;
    mathmarks[2] = 3;
    mathmarks[3] = 5;
    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl; 
    // cout<<marks[1]<<endl; 
    // cout<<marks[2]<<endl; 
    // cout<<marks[3]<<endl; 
    
    // cout<<"These are math marks"<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // mathmarks[2] = 4; // You can change the value of the array
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<mathmarks[i]<<endl;
    // }

    // quiz: do the above with while and do-while loops
    int i = 0;
    // while (i<4)
    // { cout<<"The marks for student number "<< i << " is "<< marks[i]<<endl;
    //     i++;
        
    // }
    // do
    // {
    //    cout<<"The marks for student number "<< i << " is "<< marks[i]<<endl;
    //    i++;
    // } while (i<4);


    // Pointer and array:

    int* p = marks;
    cout<<"The value of marks[0] is "<<*p <<endl;
    cout<<"The address of marks[0] is "<<p <<endl;
    cout<<"The value of marks[1] is "<<*(p+1) <<endl;
    cout<<"The address of marks[1] is "<<p+1 <<endl;
    cout<<"The value of marks[2] is "<<*(p+2) <<endl;
    cout<<"The address of marks[2] is "<<(p+2) <<endl;
    cout<<"The value of marks[3] is "<<*(p+3) <<endl;
    cout<<"The address of marks[3] is "<<p+3 <<endl;

    cout<< * (p++) << endl; 
    cout<< * (++p) << endl;



    return 0; 

}