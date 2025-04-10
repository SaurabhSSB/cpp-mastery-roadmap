 # include<iostream>
 using namespace std;
 
 template <class T>
 class Vegetarian{
     public:
        T* arr;
        int n;
        Vegetarian(int Y){
            n= Y;
            arr= new T[n];
        }
        ~ Vegetarian(){
            delete[] arr;
        }
        T Total_sum(Vegetarian& X){
            T total_sum= 0;
            for (int i=0; i< n; i++){
                total_sum+= this-> arr[ i]* X.arr[ i];     
            }
            return total_sum;
        }
};
 
 
 int main(){
     Vegetarian< int> Rowdy( 4), Weird( 4);
     Rowdy. arr[0]= 12;
     Rowdy. arr[1]= 14;
     Rowdy. arr[2]= 15;
     Rowdy. arr[3]= 27;
     
     Weird. arr[0]= 33;
     Weird. arr[1]= 54;
     Weird. arr[2]= 66;
     Weird. arr[3]= 55;
     
     cout<<"Dot Product of the two given array is "<< Weird. Total_sum(Rowdy)<< endl;
     
     Vegetarian< float> Rowdy_2( 4), Weird_2( 4);
     Rowdy_2. arr[0]= 12.7;
     Rowdy_2. arr[1]= 14;
     Rowdy_2. arr[2]= 15;
     Rowdy_2. arr[3]= 27.11;
     
     Weird_2. arr[0]= 33;
     Weird_2. arr[1]= 54.9;
     Weird_2. arr[2]= 66;
     Weird_2. arr[3]= 55.14;
     
     cout<<"Dot Product of the two given array is "<< Weird_2. Total_sum(Rowdy_2);
     return 0;
} 