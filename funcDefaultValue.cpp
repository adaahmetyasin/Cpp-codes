#include<iostream>

using namespace std;

double calcEarnings(double rate, double hours = 40);

int main()
{
    cout << "Employee 1 pay: " << calcEarnings (22.25) << endl;
    cout << "Employee 2 pay: " << calcEarnings (12.75, 18) << endl;

    return 0;
}

double calcEarnings(double rate, double hours)
{
    double pay;
    pay = hours * rate;
    return pay;
}