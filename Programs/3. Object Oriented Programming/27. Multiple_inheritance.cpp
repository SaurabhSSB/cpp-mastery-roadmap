#include <iostream>
using namespace std;

class Read
{
protected:
    int index;
    int pages;

public:
    void set_index(int n)
    {
        index = n;
    }
    void set_pages(int m)
    {
        pages = m;
    }
};

class Issued
{
protected:
    int time_period;
    int time_remaining;

public:
    void set_time(int s, int t)
    {
        time_period = s;
        time_remaining = t;
    }
};

class List : public Read, protected Issued
{
protected:
    int roll_no;

public:
    void setData(int a, int b, int c)
    {
        roll_no = a;
        set_time(b, c);
    }
    void getData()
    {
        cout << "The roll no is " << roll_no << "." << endl;
        cout << "The time period is " << time_period << " months." << endl;
        cout << "The time remaining is " << time_remaining << " months." << endl;
        cout << "The index is " << index << "." << endl;
        cout << "The no. of pages are " << pages << "." << endl;
    }
};

int main()
{
    List January;
    January.setData(10, 6, 2);
    January.set_index(16);
    January.set_pages(256);
    January.getData();
    return 0;
}