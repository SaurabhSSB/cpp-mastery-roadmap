# include<iostream>
# include<list>
using namespace std;

void display(list<int> &list_){ 
    list<int>:: iterator itr= list_.begin();
    for(itr; itr!= list_.end(); itr++){
        cout<< *itr<<" ";
    }
    cout<< endl;
}

int main(){
    list<int> a_1;
    a_1. push_back(15);
    a_1. push_back(27);
    a_1. push_back(18);
    a_1. push_back(5);
    list<int>::iterator it;
    it= a_1.begin();
    cout<< *it<< endl;
    display(a_1);
    return 0;
}