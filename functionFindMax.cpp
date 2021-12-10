//A value-returning function with parameters

#include<iostream>

using namespace std;

int larger(int x, int y){
    int max;
    if (x > y)
    {
        max = x;
    }
    else
    {
        max = y;
    }
    return max;
}

int main(){
    int num1, num2;

    cout << "Please enter two integers: \n";
    cin >> num1 >> num2;

    cout << "Larger: "<< larger(num1, num2);

    return 0;
}