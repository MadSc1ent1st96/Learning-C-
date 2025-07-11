#include<iostream> 

using namespace std; 

template<class T>
class vector{
    public:
    T * arr;
    int size;
        vector(int m){
            size = m;
            arr = new T[size];

        }
        T dotProduct(vector &v){
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d +=this->arr[i] * v.arr[i];
            }
            return d;
            
        }
};

int main() {
    // vector <int> v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 5;
    // v1.arr[2] = 8;
    
    // vector <int>v2(3);
    // v2.arr[0] = 9;
    // v2.arr[1] = 0;
    // v2.arr[2] = 2;

    // int a = v1.dotProduct(v2);
    // cout<<a<<endl;


    vector <float> v1(3);
    v1.arr[0] = 4.2;
    v1.arr[1] = 1.5;
    v1.arr[2] = 6.8;
    
    vector <float> v2(3);
    v2.arr[0] = 9.23;
    v2.arr[1] = 5.90;
    v2.arr[2] = 2.02;

    float b = v1.dotProduct(v2);
    cout<<b<<endl;


    return 0; 

}