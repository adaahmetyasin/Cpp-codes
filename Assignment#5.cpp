//Ahmet Yasin Ada
//1306200018
//07.12.2021

#include<iostream>

using namespace std;

// Function declaration
void calculateAge(int presentDay, int presentMonth, int presentYear, int birthDay, int birthMonth, int birthYear);

int main()
{
    int preDay, preMon, preYear;
    int birDay, birMon, birYear;

    // we get information from user about current date
    cout << "Please enter today's date(dd mm yyyy): " << endl; 
    cin >> preDay >> preMon >> preYear;

    //we get date of birth from user
    cout << "Please enter your birthday(dd mm yyyy): " << endl; 
    cin >> birDay >> birMon >> birYear;

    // Calling function calculateAge
    calculateAge(preDay, preMon, preYear, birDay, birMon, birYear);

    return 0;
}

void calculateAge(int presentDay, int presentMonth, int presentYear, int birthDay, int birthMonth, int birthYear)
{
    int day, month, year;

    if (birthDay > presentDay) // if we don't apply this statement the result of day may be negative and we can't find the right information
    {
        presentDay = presentDay + 30;
        presentMonth = presentMonth - 1;
    }
    if (birthMonth > presentMonth) // if we don't apply this statement the result of month may be negative and we can't find the right information
    {
        presentYear = presentYear - 1;
        presentMonth = presentMonth + 12;
    }

    // we calculate the value of day, month and year
    day = presentDay - birthDay;
    month = presentMonth - birthMonth;
    year = presentYear - birthYear;

    cout << "Your age is: "<< year << " years " << month << " months " << day << " days" << endl;
    
    return;
}