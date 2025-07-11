#include<iostream> 
#include<algorithm>
using namespace std; 

int main() {
    // Function objects(Functor): Function wrapped in a class so that it is available like an object 
    int arr[] = {1, 3, 5, 4, 6, 8, 9, 3, 1};
    // sort(arr, arr+9);
    sort(arr, arr+9, greater<int>());
    for (int i = 0; i < 9; i++)
    {
        cout<< arr[i]<< ' ';
    }
    


    return 0; 

}