#include<iostream> 

using namespace std; 

class shopItem{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void displayData(void){
            cout<<"The id of this item is: "<< id << endl;
            cout<<"The price of this item is: "<< price << endl;
        }
};

int main() {
    int size = 3;
    // int* ptr = &size;
    // int* ptr = new int [34];
    // general stores item
    // veggies item
    // hardware item
    shopItem *ptr = new shopItem[size];
    shopItem *ptrTemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item: "<< i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData();
        ptr->setData(p, q);
        ptr++; 
    }

        //  1 2 3 
        //      ^
        //      |
        //      |
        //     ptr
        // ptrTemp

    for (int i = 0; i < size; i++)
    {
        cout<<"Item number "<< i+1<<endl;
        ptrTemp->displayData();
        ptrTemp++;
    }
    
    

    return 0; 

}