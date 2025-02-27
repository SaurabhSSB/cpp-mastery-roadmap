# include<iostream>
# include<fstream>
using namespace std;

int main(){
    string str= "This is funny.";
    ofstream treat;
    treat.open("Opener.txt");
    treat<< str;    
    treat.close();
        
    string str1, str2;
    ifstream bunny;
    bunny.open("Writer.txt");
    bunny>> str1>> str2;
    cout<< str1<< endl<< str2;
    bunny.close();
    return 0;
}