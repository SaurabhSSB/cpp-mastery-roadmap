# include <iostream>
# include <cmath>
using namespace std;

class Cartesian{
    int x,y;
    int u,v;
    int dimension;
    public:
        Cartesian( void);
        void setPoint( int a, int b, int s, int t){
            x= a;
            y= b;
            u=s;
            v=t;
        }
        void Distance(){
            cout<< sqrt(( x - u ) * ( x - u ) + ( y - v ) * ( y - v ));
        }

        void getPoint(){
            cout<< "The first point is in ( "<< x<< ", "<<y<<") co-ordinate"<< endl;
            cout<< "The second point is in ( "<< u<< ", "<<v<<") co-ordinate"<< endl;
        }

};

Cartesian:: Cartesian( void){
    dimension= 2;
    cout<< "The Dimension of the plane is "<< dimension<< endl;
}

int main(){
    Cartesian point;
    int num_1, num_2, num_3, num_4;
    cout<< "The co-ordinates of first point:- "<< endl;
    cin>> num_1>> num_2;
    cout<< "\nThe co=ordinates of second point:- "<< endl;
    cin>> num_3>> num_4;
    point. setPoint( num_1, num_2, num_3, num_4);
    point. getPoint();
    point. Distance();
    return 0;
}

