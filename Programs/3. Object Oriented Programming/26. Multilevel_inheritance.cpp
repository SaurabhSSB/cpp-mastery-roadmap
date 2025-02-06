#include <iostream>
using namespace std;

class Entry
{
protected:
    int roll_no;
    int age;

public:
    void setEntry(int a, int b)
    {
        roll_no = a;
        age = b;
    }
    void getEntry()
    {
        cout << "The roll no is " << roll_no << "." << endl;
        cout << "The age is " << age << "." << endl;
    }
};

class Data : public Entry
{
protected:
    string Name;

public:
    void setData(string s)
    {
        Name = s;
    }
    void getData()
    {
        cout << "The Name of the student roll no " << roll_no << ", age " << age << " is " << Name << "." << endl;
    }
};

class Final : public Data
{
protected:
    char gender;

public:
    void set_gender(char);
    void get_gender();
    void getInfo()
    {
        getEntry();
        getData();
        get_gender();
    }
};

void Final::set_gender(char u)
{
    gender = u;
}

void Final::get_gender()
{
    cout << "The Gender of " << Name << ", roll no " << roll_no << ", " << age << " years old is " << gender << " ." << endl;
}

int main()
{
    Final student;
    student.setEntry(10, 22);
    student.setData("Saurabh");
    student.set_gender('M');
    student.getInfo();
    return 0;
}