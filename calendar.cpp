//
//  main.cpp
//  calendar
//
//  Created by Ahmet Yasin ADA on 15.11.2021.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main () {
// Declaration including initialization
int startDay;
int daysInMonth; int col = 1;
// Validation of days In a Month
do
{
cout << "Enter the number of days in the month (28, 29, 30, or 31): ";
cin >> daysInMonth;
} while (daysInMonth < 28 || daysInMonth > 31); // Validation of start day
do
{
cout << "Enter start day (0 to 6): ";
cin >> startDay;
} while (startDay < 0 || startDay > 6); // Print titles
cout << endl;
cout << "Sun Mon Tue Wed Thr Fri Sat" << endl;
cout << "--- --- --- --- --- --- ---" << endl;
// Print spaces before the startday
for (int space = 0; space < startDay; space++) {
cout << " ";
col++; }
// Print the calendar
for (int day = 1; day <= daysInMonth; day++) {
cout << setw(3) << day << " ";
    col++;
if (col > 7)
{
cout << endl;
col = 1; }
}
return 0;
}
