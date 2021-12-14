#include<iostream>

using namespace std;

int num = 10;

int main()
{
    int num = 25;

    cout << "Global num: " << ::num << endl;
    cout << "Local num: " << num << endl;

    return 0;
}