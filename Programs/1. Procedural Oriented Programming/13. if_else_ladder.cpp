// if- else ladder:= multiple if else if else statements

#include <iostream>
using namespace std;

int main()
{
    char gender;
    cout << "Enter your gender(M/F):- " << endl;
    cin >> gender;

    int age;
    cout << "Enter your age:- " << endl;
    cin >> age;

    if (gender == 'M')
    {
        if (age >= 18)
        {
            if (age >= 60)
            {
                cout << "Thanks for coming here is Senior Citizen pass." << endl;
            }
            else
            {
                cout << "Thanks for coming here is Adult pass." << endl;
            }
        }
        else if (age >= 5)
        {
            cout << "Thanks for coming here is your child pass." << endl;
        }
        else if (age >= 0)
        {
            cout << "Thanks for coming your are allowed with your parents." << endl;
        }
        else
        {
            cout << "Not valid" << endl;
        }
    }
    else
    {
        cout << "Thanks for coming here is your female pass." << endl;
    }
    return 0;
}