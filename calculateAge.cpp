#include<iostream>

using namespace std;

int main()
{
    int year, myage, fatherage, motherage, mbd, fbd, mfd;
    int difference, sum;

    cout << "Please enter which year you live: " << endl;
    cin >> year;

    cout << "Please enter your age: " << endl;
    cin >> myage;

    cout << "Please enter your father' age: " << endl;
    cin >> fatherage;

    cout << "How much older is your father than your mother?";
    cin >> difference;

    motherage = fatherage - difference;

    cout <<"Your mother' age is : " << motherage << endl;

    sum = myage + fatherage + motherage;

    cout << "Your age' sum is :" << sum << endl;

    mbd = year - myage;
    fbd = year - fatherage;
    mfd = year - motherage;

    cout << "Your birth of year is: " << mbd << endl;
    cout << "Your father' birth of year is: " << fbd << endl;
    cout << "Your mother' birth of year is: " << mfd << endl;

    return 0;
}