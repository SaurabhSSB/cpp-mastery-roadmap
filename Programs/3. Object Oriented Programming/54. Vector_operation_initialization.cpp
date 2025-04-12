# include <iostream>
# include <vector>
using namespace std;

template <class A>
void discovery(vector<A> &vector_1){
    for( int i= 0; i< vector_1.size(); i++){
        cout<< vector_1.at(i)<< " ";
    }
    cout<< endl;
}

int main() {
    vector<int> dyn;
    vector<int> dyno= { 4, 6, 8, 12};
    vector<int> man( 3);
    vector<int> main( man);
    vector<int> tour( 5, 3);
    
    discovery( dyn);
    discovery( dyno);
    discovery( man);
    discovery( main);
    discovery( tour);
    return 0;
}