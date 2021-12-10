/*Note that any nonzero value (positive or negative) is interpreted as true; 
any zero value is interpreted as false.*/ 
#include<iostream>
using namespace std;

int main()
{

    bool x = 123;
    bool y = -8;
    bool z = 0;
    bool t = -0;
    bool u = true;
    bool v = false;

    cout << " Value of x: " << x << endl;
    cout << " Value of y: " << y << endl;
    cout << " Value of z: " << z << endl;
    cout << " Value of t: " << t << endl;
    cout << " Value of u: " << u << endl;
    cout << " Value of v: " << v << endl;

    return 0;
}