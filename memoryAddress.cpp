#include<iostream>
using namespace std;

int main(){
    string food = "piza";
    string &meal = food;
    string &fastfood = meal;

    cout << &food << endl;
    cout << &meal << endl;
    cout << &fastfood << endl;
    return 0;
}