// Classes can have methods and properties.
#include <iostream>

using namespace std;

class Entry
{
private:
    int a, b, c;

public:
    int x, y, z;
    void setData(int ab, int bb, int cb); // Declaring
    void getData()
    {
        cout << "a " << a << endl;
        cout << "b " << b << endl;
        cout << "c " << c << endl;
        cout << "x " << x << endl;
        cout << "y " << y << endl;
        cout << "z " << z << endl;
    }
};

void Entry::setData(int ab, int bb, int cb)
{ // ::-> scope resolution operator
    a = ab;
    b = bb;
    c = cb;
}

int main()
{
    Entry student;
    student.x = 27;
    student.y = 14;
    student.z = 16;
    student.setData(1, 2, 126);
    student.getData();
    return 0;
}