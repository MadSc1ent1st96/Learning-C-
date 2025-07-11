#include<iostream> 

using namespace std; 

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void display(void){
            cout<< "The Point is ("<<x<<","<<y<<")"<<endl;
        }
};

int main() {
    Point p (1,1);
    p.display();

    Point q (4,6);
    q.display();

    return 0; 

}