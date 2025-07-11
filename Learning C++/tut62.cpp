#include<iostream> 
#include<fstream>

using namespace std; 

int main() {
    ofstream out;
    out.open("tut60_sample.txt");
    out<<"This is me\n";
    out<<"This is also me\n";
    out<<"This is me also\n";
    out<<"This is alsi me\n";
    out.close();

    ifstream in;
    string st, st2;
    in.open("tut60_sample.txt");
    // getline(in, st);
    // getline(in, st2);
    // in>>st>>st2;
    // cout<<st<<st2;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    
    return 0; 

}