//15.10.2021
//Ahmet Yasin ADA
//Lab Assignment#1-P3

#include<iostream>

using namespace std;

int main()
{
    float num1, num2;
    float addition, subtraction, multiplication, division;

    cout<<"Please enter first integer:\n";
    cin>>num1;

    cout<<"Please enter second integer:\n";
    cin>>num2;

    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;

    if (num2 == 0)
    {
    cout<<num1<<"+"<<num2<<"="<<addition<<endl;
    cout<<num1<<"-"<<num2<<"="<<subtraction<<endl;
    cout<<num1<<"*"<<num2<<"="<<multiplication<<endl;
    cout<<num1<<"/"<<num2<<"="<<"UNDEFINED"<<endl;
    }else
    {
    cout<<num1<<"+"<<num2<<"="<<addition<<endl;
    cout<<num1<<"-"<<num2<<"="<<subtraction<<endl;
    cout<<num1<<"*"<<num2<<"="<<multiplication<<endl;
    cout<<num1<<"/"<<num2<<"="<<division<<endl;
    }
    return 0;
}