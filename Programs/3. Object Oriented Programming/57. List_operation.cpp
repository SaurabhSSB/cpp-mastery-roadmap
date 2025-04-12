# include <iostream>
# include <list>
using namespace std;

void display(list<int> li){
    list<int>:: iterator it;
    for(it= li.begin(); it!=  li.end(); it++){
        cout<< *it<< " ";
    }
    cout<< endl;
}

int main() {
    list<int> l1= { 24, 23, 27, 11};
    list<int> l2= { 16, 15, 45, 32};
    l1.sort();
    display(l1);
    l2. reverse();
    display( l2);
    l1.merge(l2);
    cout<< "After merging list l1 with list l2 \nl1= ";
    display(l1);
    return 0;
}