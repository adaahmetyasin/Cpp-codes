#include<iostream>

using namespace std;


// Function declaration
void fun(int y);

int main()
{
    // Declaration and initialization of an argument
    int x = 5;
    // Calling function fun and passing x as an argument
    fun(x);
    // Printing the value of x to see no change
    cout << "Value of x in main: "<< x << endl;

    return 0;
}
void fun(int y){
    y++;
    cout << "Value of y in fun: " << y <<endl;
    return;
}