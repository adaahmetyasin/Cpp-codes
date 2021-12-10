//Ahmet Yasin Ada
//1306200018
//10.12.2021

#include<iostream>
#include <iomanip>

using namespace std;

int addition(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
float division(float x, float y);

int main()
{
    int num1, num2;

    cout << "Please enter two integers: " << endl;
    cin >> num1 >> num2;

    addition(num1 ,num2);
    subtraction(num1, num2);
    multiplication(num1, num2);
    division(num1, num2);

    return 0;
}

int addition(int x, int y)
{
    int sum;
    sum = x + y;
    cout << x << " + " << y << " = " << sum << endl;
    
    return x+y;
}

int subtraction(int x, int y)
{
    int difference;
    difference = x - y;
    cout << x << " - " << y << " = " << difference << endl;

    return x-y;
}

int multiplication(int x, int y)
{
    int product;
    product = x * y;
    cout << x << " * " << y << " = " << product << endl;

    return x*y;
}

float division(float x, float y)
{
    float quotient;
    quotient = x / y;
    cout << x << " / " << y << " = ";
    cout << fixed << showpoint << setprecision (3);
    cout << quotient << endl;

    return x/y;
}