#include<iostream> 

using namespace std; 

template<class T>
class abc{
    public:
        T data;
        abc(T a){
            data = a;
        }
        void display();
};

template <class T>
void abc<T> :: display(){
            cout<<data<<endl;
        }


void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

template<class T>
void func1(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main() {
    // abc<int> a(0);
    // abc<string> a("aifns");
    // cout<<a.data<<endl;
    // a.display();
    func(4); // Exact match takes the highest priority
    func1(8);


    return 0; 

}