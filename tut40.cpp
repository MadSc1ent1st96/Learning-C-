#include <iostream>

using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student::set_roll_number(int r)
{
    roll_no = r;
}

void student::get_roll_number(void)
{
    cout << "The roll number is: " << roll_no << endl;
}

class exam : public student
{
protected:
    float maths, physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}

void exam ::get_marks(void)
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

class result : public exam
{
    float percentage;

public:
    void display(void);
};

void result ::display()
{
    get_roll_number();
    get_marks();
    cout << "Your percentage is: " << (maths + physics) / 2 << "%" << endl;
}

int main()
{
    result aniket;
    aniket.set_roll_number(96);
    aniket.set_marks(98.0, 95.0);
    aniket.display();

    return 0;
}