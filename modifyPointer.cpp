#include<iostream>
using namespace std;

int main(){
    string car = "Mercedes";
    string* ptr = &car;
    string& vehicle = car;

    cout << car << endl;      //Mercedes
    cout << ptr << endl;      //0x7ff7b0e6d600 it can be change
    cout << &car << endl;     //0x7ff7b0e6d600 it can be change
    cout << &vehicle << endl; //0x7ff7b0e6d600 it can be change 
    cout << vehicle << endl;  //Mercedes
    cout << *ptr << endl;     //Mercedes

    *ptr = "BMW";
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << car << endl;

    return 0;
}