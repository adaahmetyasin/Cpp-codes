//22.10.2021
//Ahmet Yasin Ada
//Lab Assignment #2-P1

#include<iostream>

using namespace std;

int main()
{
    int n, num1, num2, addition, subtraction, product, modulo;
    float division;

    cout<<"Please select the operation you want to realise."<<endl;
    cout<<"1-Addition"<<endl;
    cout<<"2-Subtraction"<<endl;
    cout<<"3-Product"<<endl;
    cout<<"4-Division"<<endl;
    cout<<"5-Modulo"<<endl;
    cin>>n;
    
    if (n == 1)
    {
        cout<<"Please enter 2 integers: "<<endl;
        cin>> num1>> num2;
        
        addition = num1 + num2;
        cout<<"Result: "<<addition<<endl;
    }
    else if (n == 2)
    {
        cout<<"Please enter 2 integers: "<<endl;
        cin>> num1>> num2;
        
        subtraction = num1 - num2;
        cout<<"Result: "<<subtraction<<endl;
    }
    else if (n == 3)
    {
        cout<<"Please enter 2 integers: "<<endl;
        cin>> num1>> num2;
        
        product = num1 * num2;
        cout<<"Result: "<<product<<endl;
    }
    else if (n == 4)
    {
        cout<<"Please enter 2 integers: "<<endl;
        cin>> num1>> num2;
        
        while (num2 == 0)
        {
            cout<<"UNDEFINED\n";
            cout<<"Please enter 2 integers: "<<endl;
            cin>> num1>> num2;
        }
        division = num1 / num2;
        cout<<"Result: "<<division<<endl;
    }else if(n == 5)
    {
        cout<<"Please enter 2 integers: "<<endl;
        cin>> num1>> num2;
        
        modulo = num1 % num2;
        cout<<"Result: "<<modulo<<endl;
    }
    return 0;
}