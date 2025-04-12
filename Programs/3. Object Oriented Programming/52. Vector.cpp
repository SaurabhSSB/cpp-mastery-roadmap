# include <iostream>
# include <vector>
using namespace std;

void output(vector<int> &v){
    for( int i= 0; i< v.size(); i++){
        cout<< v[i]<< " ";
    }
    cout<< endl;
}

int main() {
    vector<int> a;
    int size;
    cout<< "Enter the size of the element:- ";
    cin>> size;
    
    int temp;
    for (int j= 0; j< size; j++){
        cout<< "Enter the element number "<< j+ 1<< "= ";
        cin>> temp;
        a.push_back(temp);
    }
    output(a);
    return 0;
}