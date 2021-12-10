//A value-returning function without parameters
#include <iostream>
using namespace std;

int getData()
{
int data;
do{
cout << "Enter a positive integer: ";
cin >> data;
}
while (data <= 0); 
return data;
}

int main()
{
int number = getData(); // Function call with no argument 
cout << "Right-most digit: \n" << number % 10;
return 0;
}
