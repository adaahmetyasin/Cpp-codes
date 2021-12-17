//Ahmet Yasin Ada
//1306200018
//17.12.2021

#include<iostream>

using namespace std;

void getNumber (int& number);
void findPrime (int number, bool& result);
void output (int number, bool result);

int main()
{
    int number;
    bool result;

    getNumber(number);
    findPrime (number, result);
    output (number, result);

    return 0;
}

void getNumber (int& number)
{
    cout << "Please enter an integer: " << endl;
    cin >> number;
}
void findPrime (int number, bool& result)
{
    result = true;  
    if (number <= 1)
    {
        result = false;
    }
    else
    {
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                result = false;
            }
        }
    }
    
}
void output (int number, bool result)
{
    if (result == true)
    {
        cout << number << " is a prime number. " << endl;
        cout << "Is " << number << " a prime number ?: " << boolalpha << result << endl;
    }
    else
    {
        cout << number << " is not a prime number. " << endl;
        cout << "Is " << number << " a prime number ?: " << boolalpha << result << endl;
    }     
}

