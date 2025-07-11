#include<iostream> 

using namespace std; 

class complex{
    int a;
    int b;
    public:
    void setnumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1, complex o2);
    // The function sumcomplex is a friend of the class complex (allowed to do anything with the private data)
    void printnumber(){
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setnumber((o1.a+o2.a), (o1.b+o2.b));
    return o3;
};

int main() {
    complex c1, c2, sum;
    int t, l;
    cin>> t >> l;
    c1.setnumber( t, l);
    c2.setnumber( 3, 4);

    c1.printnumber();
    c2.printnumber();

    sum = sumcomplex(c1, c2);
    sum.printnumber();

    return 0; 

}

/*  Properties of Friend Function:
1. Not in the scope of class
2. Since it is not in the scope of class, it cannot be called from the object of that class. c1.sumcomplex == invalid
3. can be invoked without any object
4. usually contains the objects as arguments
5. can be declared inside public or private section of the class
6. It cannot access the members of the class directly by their name and need object_name.member_name to access any member of the class

*/