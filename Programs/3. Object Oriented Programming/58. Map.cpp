# include<iostream>
# include<map>

using namespace std;
int main(){
    map< int, char> omni;
    omni[1]= 'A';
    omni[2]= 'B';
    omni[3]= 'C';
    omni.insert({{4, 'D'}, {5, 'E'}});
    map< int, char>:: iterator itr;
    itr= omni.begin();
    for(itr; itr!= omni.end(); itr++){
        cout<< (*itr).first<<" - "<< (*itr).second<< endl;
    }
    cout<< "The size of the map is "<< omni.size()<< "."<< endl;
    return 0;
}