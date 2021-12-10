//15.10.2021
//Ahmet Yasin ADA
//Lab Assignment#1-P2

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double fahrenheit, celsius, kelvin;
    int n;

    cout<<"Please select the operation you want to realise."<<endl;
    cout<<"1-From Celsius to kelvin and fahrenheit."<<endl;
    cout<<"2-From Kelvin to celsius and fahrenheit."<<endl;
    cout<<"3-From Fahrenheit to kelvin and celsius."<<endl;
    cin>>n;

    switch (n)
    {
        
    case 1:
    cout<<"Please enter a celsius temperature value\n";
    cin>>celsius;

    fahrenheit = (celsius * 9/5) + 32;
    kelvin = celsius + 273.15;

    cout<<"Conversion result:\n"<<celsius<<" Celsius\n"<<fahrenheit<<" Fahrenheit\n"<<kelvin<<" Kelvin\n";
    break;

    case 2:
    cout<<"Please enter a kelvin temperature value\n";
    cin>>kelvin;

    celsius = kelvin - 273.15;
    fahrenheit = (kelvin - 273.15) * 9/5 + 32;

    cout<<"Conversion result:\n"<<kelvin<<" Kelvin\n"<<celsius<<" Celsius\n"<<fahrenheit<<" Fahrenheit\n";
    break;

    case 3:
    cout<<"Please enter a fahrenheit temperature value\n";
    cin>>fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;
    kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;

    cout<<"Conversion result:\n"<<fahrenheit<<" Fahrenheit\n"<<celsius<<" Celsius\n"<<kelvin<<" Kelvin\n";
    break;
    }
    return 0;
}