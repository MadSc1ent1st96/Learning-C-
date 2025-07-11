#include<iostream> 
#include<cstring>
using namespace std; 

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display(){}
};

class CWHvideo: public CWH{
    float videolength;

    public:
        CWHvideo(string s, float r, int vl): CWH(s, r){
            videolength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;  
            cout<<"This has rating "<<rating<<" out of 5 stars "<<endl; 
            cout<<"Length of the video is " << videolength<<" minutes"<<endl;
        }
};

class CWHtext: public CWH{
    int wordcount;

    public:
        CWHtext(string s, float r, int wc): CWH(s, r){
            wordcount = wc;
        }
        void display(){
            cout<<"This is an amazing text tutorial  with title "<<title<<endl;  
            cout<<"This has rating "<<rating<<" out of 5 stars "<<endl; 
            cout<<"No. of words in the text tutorial is: " << wordcount <<" words"<<endl;
        }
};

int main() {
    string title = new char[30];
    float rating, vlen;
    int words;

    // For CWHvideo

    title = "Tutorial --";
    vlen = 4.56;
    rating = 4.89;
    CWHvideo tut(title, rating, vlen);
    // tut.display();

    // For CWHtext

    title = "Tutorial -- text";
    words = 456;
    rating = 4.33;
    CWHtext tuttext(title, rating, words);
    // tuttext.display();

    CWH* tuts[2];
    tuts[0] = &tut;
    tuts[1] = &tuttext;

    tuts[0]->display();
    tuts[1]->display();

    return 0; 

}

/*
Rules for virtual functions:
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. A virtual function in base class might not be used
5. A virtual function defined in the base class, there is no necessity for defining it in a derived class.
*/