#include<iostream> 

using namespace std; 

class Employee{
    static int count;
    int id;
    public:
        void setdata(){
            cout<<"Enter the id "<<endl;
            cin>>id;
            count++;
        }
        void getdata(){
            cout<<"The id of employee is "<<id<< " and this is employee number "<<count<<endl;
        }
        static void getcount(){
            cout<<"The value of count is "<<count<<endl;
            // cout<<id; // Throws an error because id is not static
        }
};

// Count is the static data member of the class Employee
// It is shared by all objects of the class Employee
int Employee:: count;  // Default value --> 0

int main() {
     
    Employee a,ab,abc;
    a.setdata();
    a.getdata();
    Employee::getcount();
    
    ab.setdata();
    ab.getdata();
    Employee::getcount();

    abc.setdata();
    abc.getdata();
    Employee::getcount();

    return 0; 

}