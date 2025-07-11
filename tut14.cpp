#include<iostream> 

using namespace std; 

typedef struct employee
{
    /* data */
    int eID; // 4
    char favChar; // 1
    float salary; // 4
} ad;



union money
{
    /* data */
    int rice; // 4
    char car; // 1
    float pounds; // 4
};  


int main() {
     // struct employee abc;
    //  ad abc;
    //  abc.eID = 1;
    //  abc.favChar = 'a';
    //  abc.salary = 14298402;
    //  cout<<"Th value is "<<abc.eID<<endl;
    //  cout<<"Th value is "<<abc.favChar<<endl;
    //  cout<<"Th value is "<<abc.salary<<endl;

    // union money m3;
    // m3.rice = 34;
    // m3.car = 'c';
    // cout<<m3.rice<<endl;
    // cout<<m3.car;

    enum Meal { breakfast, lunch, dinner };
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner<<endl;

    Meal m1 = breakfast;
    Meal m2 = lunch;
    cout<<m1<<m2<<endl;
    cout<<(m1 == 1)<< (m1 == 0)<<endl;

    return 0; 

}