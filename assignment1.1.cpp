//15.10.2021
//Ahmet Yasin ADA
//Lab Assignment#1-P1

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name, surname;
    string space = " ";
    string exclamation = "!";
    int year = 2021;
    int age, birthOfYear;

    cout<<"Please write your name:\n";
    getline(cin, name);
    cout<<"Please write your surname:\n";
    getline(cin, surname);
    cout<<"Please write your age:\n";
    cin>>age;
    
    while (age < 0)
    {
        cout<<"Please enter a valid age:\n";
        cin>>age;
    }
    
    birthOfYear = year - age;

    cout<<"Hi "<<name<<space<<surname<<exclamation<<endl;
    cout<<"Your birth year is "<<birthOfYear<<endl;
    

    return 0;
}

