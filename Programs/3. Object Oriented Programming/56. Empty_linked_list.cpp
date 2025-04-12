# include <iostream>
# include <list>
using namespace std;

void display( list<char> &list_){
    list<char>:: iterator itr;
    itr= list_.begin();
    for(itr; itr!= list_.end(); itr++){
        cout<< *itr<< " ";
    }
    cout<< endl;
}

int main() {
    list<char>:: iterator it;
    list<char> ch(6);
    it= ch.begin();
    *it= 'R';
    it++;
    *it= 'S';
    it++;
    *it= 'T';
    it++;
    *it= 'U';
    it++;
    *it= 'V';
    it++;
    *it= 'W';
    
    display(ch);
    
    ch.pop_back();
    ch.pop_front();
    ch.remove('U');
    display(ch);
    return 0;
}