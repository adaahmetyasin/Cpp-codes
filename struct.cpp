#include <iostream>
#include <string>
using namespace std;


int main(){

struct coin{
    int value;
    string name;
    int target;
};

coin coin1;
coin1.name = "bitci";
coin1.value = 8;
coin1.target = 26;

coin coin2;
coin2.name = "xrp";

struct{
    string model;
    string brand;
    int year;
}car1, car2;

car1.brand = "BMW";
car1.model = "X5";
car1.year = 1999;

car2.brand = "FORD";
car2.model = "MUSTANG";
car2.year = 1969;

cout << coin2.name << endl;
cout << coin1.target << endl;
cout << car1.brand << endl;
cout << car2.year << endl;


return 0;
}
