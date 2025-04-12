# include <iostream>
# include <vector>
using namespace std;

void discovery(vector<int> &vector_1){
    for( int i= 0; i< vector_1.size(); i++){
        cout<< vector_1[ i]<< " ";
    }
    cout<< endl;
}

int main() {
    int n;
    int temp;
    cout<< "Enter the size of the vector:- ";
    cin>> n;
    vector<int> dyn;
    for (int i= 0; i< n; i++){
        cout<< "Enter the "<< i+1<< " th element- ";
        cin>> temp;
        dyn. push_back(temp);
    }        
    dyn. pop_back();
    discovery(dyn);
    vector<int>:: iterator itr= dyn. begin();
    dyn. insert(itr+ 1, 4, 32);
    discovery(dyn);
    return 0;
}