# include <iostream>
using namespace std;

int main(){
    char gender;
    cout<< "Enter your gender(M/F):- "<< endl;
    cin>> gender;
    
    int age;
    cout<< "Enter your age:- "<< endl;
    cin>> age;
    
    switch(gender){
        case 'M':{
            switch(age){
                case 60:{
                    cout<< "Thanks for coming here is Senior Citizen pass."<< endl;
                    break;
                }
                default:{
                    cout<< "How unexpected"<< endl;
                    break;
                }
            }
        }
        default:{
            cout<< "This was unexpected"<< endl;
            break;
        }
        
    }
    return 0;    
}