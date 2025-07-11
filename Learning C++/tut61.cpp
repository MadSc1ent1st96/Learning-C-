#include<iostream> 
#include<fstream>
using namespace std; 

int main() {
    // Connecting our file with hout stream
    ofstream hout("tut60_sample.txt");

    // Creating a name string and filling it with variable entered by user 
    string name;
    cout<<"Enter your name: "<<endl;
    cin>> name;

    hout << "My name is " + name;

    hout.close();
    
    ifstream hin("tut60_sample.txt");
    string content;
    // hin>> content;
    getline(hin, content );
    cout<<"The content of the file is: "<<endl<< content;

    hin.close();
     
    return 0; 

}