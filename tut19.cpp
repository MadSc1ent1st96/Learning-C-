#include<iostream> 

using namespace std; 

// int sum(int a, int b){
//     cout<<"Sum using 2 arguments"<<endl;
//     return a + b;
// }

// int sum(int a, int b, int c){
//     cout<<"Sum using 3 arguments "<<endl;
//     return a + b + c;
// }

// volume of a cylinder
int volume(double r, int h){
    return (3.14 * r * r * h);
}

// colume of a cube
int volume(int a){
    return a * a * a;
}

// volume of a cuboid
int volume (int l, int b, int h){
    return l * b * h;
}

int main() {
    
    // cout<<"The sum of 2 and 3 is: "<<sum(2, 3)<<endl;
    // cout<<"The sum of 2, 4 and 3 is: "<<sum(2, 3, 4)<<endl;
    cout<<"The volume of cuboid of 2, 4 and 3 is: "<<volume(2, 3, 4)<<endl;
    cout<<"The volume of cylinder of 2 and 3 is: "<<volume(2, 3)<<endl;
    cout<<"The volume of cube of 2 is: "<<volume(2)<<endl;

     

    return 0; 

}