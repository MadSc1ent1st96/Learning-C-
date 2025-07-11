#include<iostream> 
#include<map>
using namespace std; 

// Map is an associative array

int main() {
    map< string , int> marksMap;
    marksMap["a"] = 98;
    marksMap["b"] = 8;
    marksMap["c"] = 76;
    
    marksMap.insert({{"abc" , 67}, {"ab", 79}});

    map< string , int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<' '<< (*iter).second << '\n';
    }
    
    cout<< "The size is: "<<marksMap.size()<<endl; 
    cout<< "The max_size is: "<<marksMap.max_size()<<endl; 
    cout<< "The empty's return value is: "<<marksMap.empty()<<endl; 

    return 0; 

}