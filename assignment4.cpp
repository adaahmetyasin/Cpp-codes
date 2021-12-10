//Ahmet Yasin Ada
//1306200018
//05.12.2021

#include <iostream>

using namespace std;

int main()
{
    int num1;
   
    cout << "Please enter number of star: " << endl;
    cin >> num1;
    cout << endl;

    for (int i = 1; i <= num1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = i; j <= num1; j++)
        {
            cout << "X";
        }
        for (int j = i; j <= num1; j++)
        {
            cout << "X";
        }
        cout << endl << endl;   
    }
    cout << endl;
    for (int i =1; i <= num1; i++)
    {
        for (int j = i; j <= num1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "X";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "X";
        }
        cout << endl << endl;
    }
    for (int i = 1; i <= num1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "X";
        }
        for (int j = 2*i; j <= 2*num1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "X";
        }
        cout << endl << endl;
    }
    for (int i = 1; i <= num1; i++)
    {
        for (int j = i; j < num1; j++)
        {
            cout << "X";
        }
        for (int j = 0; j <= 2*i; j++)
        {
            cout << " ";
        }
        for (int j = i; j < num1; j++)
        {
            cout << "X";
        }
        cout << endl << endl;
    }

    int num2;
    cout << "Please enter number of star: " << endl;
    cin >> num2;
    cout << endl;

    for (int i = 1; i <= num2; i++)
    {   
        
        for (int j = 2*i; j <= (2*num2)-1; j++)
        {
            cout << " ";  
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= (num2-1); i++)
    {   
        for (int j = 1; j <= 2*i; j++)
        {
            cout << " ";
        }
        for (int j = i; j <= ((num2)-1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    int num3;

    cout << "Please enter number of star: " << endl;
    cin >> num3;
    cout << endl;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = i; j <= 2 ; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (num3-6)+2*i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = 1; i <= 1; i++)
    {
        for (int j = 1; j <= 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= num3-2; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = 1; i <= 3; i++)
    {
        for (int j = i; j <= 2 ; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (num3-6)+2*i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= num3-2*i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}