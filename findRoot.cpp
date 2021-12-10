#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c;
    double term;

    cout <<"ax2 + bx + c = 0"<< endl;
    
    cout << "Please enter the value of a: \n";
    cin >> a;

    cout << "Please enter the value of b: \n";
    cin >> b;

    cout << "Please enter the value of c: \n";
    cin >> c;

    term = pow(b, 2) - 4 * a * c;

    if (term < 0)
    {
        cout << " There is no reel root! \n";
    }
    else if (term == 0)
    {
        cout << "The roots are equal. \n";
        cout << "x1 = x2 = " << (-b / (2*a));
    }
    else
    {
        cout << "There are two distinct roots:\n";
        cout << "x1 = " << (-b + sqrt(term)) / (2 * a) << endl;
        cout << "x2 = " << (-b - sqrt(term)) / (2 * a) << endl;
    }
    return 0;
}