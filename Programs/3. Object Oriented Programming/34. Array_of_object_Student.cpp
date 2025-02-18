# include <iostream>
using namespace std;

class Student{
    int roll_no;
    string name;
    int age;
    int rank;
    public:
        void setData( int num_1, string str_1, int num_2, int num_3){
            roll_no= num_1;
            name= str_1;            
            age= num_2;
            rank= num_3;
        }
        void getData(){
            cout<< "The roll no is "<< roll_no<< endl;
            cout<< "The name is "<< name<< endl;
            cout<< "The age is "<< age<< endl;
            cout<< "The rank is "<< rank<< endl;
        }
};

int main(){
    int student_number, m, o, p;
    string n;
    cout<< "Enter the number of student"<< endl;
    cin>> student_number;
    Student *Entry= new Student[student_number];
    Student *Entry_point= Entry;
    for( int i= 1; i<= student_number; i++){
        cout<< "Enter roll no, name, age and rank for student "<< i<< endl; 
        cin>> m>> n>> o>> p;
        Entry-> setData( m, n, o, p);
        Entry++;
    }
    for( int j= 1; j<= student_number; j++){
        Entry_point-> getData();
        Entry_point++;
    }
    return 0;
}