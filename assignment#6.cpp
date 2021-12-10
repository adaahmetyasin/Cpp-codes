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

    cout << num1 << " + " << num2 << " = " << addition(num1 ,num2) << endl;
    cout << num1 << " - " << num2 << " = " << subtraction(num1 ,num2) << endl;
    cout << num1 << " * " << num2 << " = " << multiplication(num1 ,num2) << endl;
    cout << num1 << " / " << num2 << " = " << division(num1 ,num2) << endl;

    return 0;
}

int addition(int x, int y)
{
    int sum;
    sum = x + y;
    return sum;
}

int subtraction(int x, int y)
{
    int difference;
    difference = x - y;
    return difference;
}

int multiplication(int x, int y)
{
    int product;
    product = x * y;
    return product;
}

float division(float x, float y)
{
    float quotient;
    quotient = x / y;
    return quotient;
}