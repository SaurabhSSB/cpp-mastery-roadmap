#include <iostream>
using namespace std;

class A {
protected:
    int a;
    string s;
public:
    void set_a(int num_1, string str_1) {
        a = num_1;
        s = str_1;
    }
    virtual void get_a() {
        cout << "The value of number and string is " << a << " and " << s << endl;
    }
};

class B : public A {
protected:
    int b;
    string s_2;
public:
    void set_b(int num_1, int num_2, string str_1, string str_2) {
        set_a(num_1, str_1);  
        b = num_2;
        s_2 = str_2;
    }
    void get_b() {
        cout << "The value of number is " << a << " " << b << endl;
        cout << "The value of string is " << s << " " << s_2 << endl;
    }
};

class C : public A {
protected:
    int c;
    string s_3;
public:
    void set_c(int num_1, int num_3, string str_1, string str_3) {
        set_a(num_1, str_1); 
        c = num_3;
        s_3 = str_3;
    }
    void get_c() {
        cout << "The value of number is " << a << " " << c << endl;
        cout << "The value of string is " << s << " " << s_3 << endl;
    }
};

int main() {
    int nm_1 = 10, num_2 = 20, nm_3 = 30;
    string st_1 = "Hello", st_2 = "World", st_3 = "C++";

    A Aa;
    Aa.set_a(nm_1, st_1);
    Aa.get_a();
    
    return 0;
}
