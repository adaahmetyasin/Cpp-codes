#include<iostream>
using namespace std;

int main(){

    string coin = "bitci";
    string* ptr = &coin;

    //reference
    cout << ptr << endl;  //0x7ff7b2175600
    
    //dereference
    cout << *ptr << endl;  //bitci

    return 0;
}