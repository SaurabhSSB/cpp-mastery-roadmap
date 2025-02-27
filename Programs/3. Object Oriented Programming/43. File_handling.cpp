# include <iostream>
# include <fstream>

using namespace std;

int main() {
    string w= "writing successful";
    string r, r1;
    ofstream gate("Writer.txt");   
    gate<< w;
    gate.close();

    ifstream door("Opener.txt");
    door>> r;
    cout<< r<< endl;
    getline(door, r1);
    cout<< r1;   
    door.close(); 
    return 0;
}
 