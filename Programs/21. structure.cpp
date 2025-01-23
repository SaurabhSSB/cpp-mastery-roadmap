// Structure uses user- defined data type

# include <iostream>

using namespace std;

struct entry{
    int id;
    char symbol;
    float follower;
};

// typedef in structures is used to create a shorter alias for the structure's type, 
// making variable declarations simpler and code more readable.

typedef struct cls{
    int id;
    char symbol;
    float follower;
}cl;

int main(){
    struct entry saurabh;
    saurabh. id= 10;
    saurabh. symbol= 'S';
    saurabh. follower= 10001.101;
    cout<< saurabh. id<< endl;
    cout<< saurabh. symbol<< endl;
    cout<< saurabh. follower<< endl;    
    cl nittin;
    nittin. id= 9;
    nittin. symbol= 'S';
    nittin. follower= 101.101;
    cout<< nittin.id<< endl;
    return 0;
}