// 21/11/2021
// Ahmet Yasin Ada
// 1306200018

#include<iostream>

using namespace std;

int main()
{
    int choice;
    int num1, num2;
    int addition, subtraction, multiplication, modulo;
    float division;

    do
    {
        cout << "**** MY MENU ****\n";
        cout << "1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n5.Modulo\n6.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;     

        switch (choice)
        {
        
        case 1:
        cout << "Please enter two integers: \n";
        cin >> num1 >> num2;
        addition = num1 + num2;
        cout << num1 << "+" << num2 << "=" << addition << endl;
            break;
        
        case 2:
        cout << "Please enter two integers: \n";
        cin >> num1 >> num2;
        subtraction = num1 - num2;
        cout << num1 << "-" << num2 << "=" << subtraction << endl;
            break;
        
        case 3:
        cout << "Please enter two integers: \n";
        float num3, num4;
        cin >> num3 >> num4;
        division = num3 / num4;
        cout << num3 << "/" << num4 << "=" << division << endl;
            break;
        
        case 4:
        cout << "Please enter two integers: \n";
        cin >> num1 >> num2;
        multiplication = num1 * num2;
        cout << num1 << "*" << num2 << "=" << multiplication << endl;
            break;
        
        case 5:    
        cout << "Please enter two integers: \n";
        cin >> num1 >> num2;
        modulo = num1 % num2;
        cout << num1 << "%" << num2 << "=" << modulo << endl;
            break;
        
        case 6:
        break;
        
        default:
            cout <<"Please enter a valid number!\n\n";
            break;
        }
        
    } while (choice != 6);


    return 0;
}