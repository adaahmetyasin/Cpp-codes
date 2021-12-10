#include<iostream>
using namespace std;

int main(){

    const double PI = 3.15159;

    double radius;
    double perimeter;
    double area;

    cout << " Please enter the radius of the circle: ";
    cin >> radius;
    
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;

    cout << " The perimeter of the circle is: " << perimeter << endl;
    cout << " The area of the circle is: " << area << endl;
    cout << " The radius is: " << radius << endl;


    return 0;
}