# include<iostream>
# include<fstream>
using namespace std;

int main(){
    string str1, str2;
    ifstream bunny;
    bunny.open("Writer.txt");
    while(bunny.eof()== 0){
        getline(bunny, str1);
        cout<< str1<< endl;
    bunny.close();
    }
    return 0;
}