// essential part of top-down structure programming 
# include <iostream>

int term(int a, int b){ // Formal Parameters
    return(a*b+2); // Return value function key    
}

using namespace std;

void prnt(){
    cout<< "\nEnd of the program"<<endl;
}

int main(){
    cout<< term(3,2); // Actual Parameters
    prnt();
    return 0;
}