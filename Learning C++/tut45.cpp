#include <iostream>

using namespace std;

class student
{
protected:
    int roll_no;

public:
    void setnumber(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "Your roll no is: " << roll_no << endl;
    }
};

class Test : virtual public student
{
protected:
    int maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        physics = m1;
        maths = m2;
    }
    void print_marks(void)
    {
        cout << "Your result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class sports : public virtual student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << "Your PT score is: " << score << endl;
    }
};

class result : public Test, public sports
{
    private:
        float total;
    public:
        void display(){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is: "<< total <<endl;
        }
};

int
main()
{
    result abc;
    abc.setnumber(40);
    abc.set_marks(88.5, 96.0);
    abc.set_score(100);
    abc.display();

    return 0;
}