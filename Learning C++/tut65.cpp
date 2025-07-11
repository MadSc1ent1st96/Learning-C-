#include<iostream> 

using namespace std; 


// CLASS TEMPLATES WITH MULTIPLE (COMMA SEPERATED) PARAMETERS (ONE, TWO OR MORE)
/*
template<class T1, class T2, ... (COMMA SEPERATED)>
class nameofClass{
    //body
}
*/
template<class T1, class T2>
class myclass{
    public:
        T1 data1;
        T2 data2;

        myclass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<< this->data1<<endl<< this->data2;
        }
};
int main() {
    myclass<char, float> obj('a', 2.90);
    obj.display();

    return 0; 

}