#include<iostream>
using namespace std;

int main(){
    string food = "pizza";
    string* pointer = &food;
    string &meal = food;


    cout << food << "\n";
    cout << &food << "\n";
    cout << pointer << endl;
    cout << &meal << endl;

    return 0;
}