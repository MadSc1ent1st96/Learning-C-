#include<iostream> 
#include<list>
using namespace std; 

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<< *it << " ";
    }
    cout<<endl;
};

int main() {
    //  6 8 9
    list<int> list1;    // List of 0 length
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(8);
    list1.push_back(12);
    list1.push_back(141);
    list1.push_back(11);
    
    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    
    display(list1);
    // Removing elements from the list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(141);

    // Sorting the list
    // list1.sort();
    // display(list1);

    // Reversing the list
    list1.reverse();
    display(list1);
    
    list<int> list2(3); // Empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 10;
    iter++;
    display(list2);  

    list1.merge(list2);
    cout<<"List 1 after merging ";
    display(list1);
    display(list2);


    return 0; 

}