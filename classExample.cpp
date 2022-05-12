#include<iostream>
using namespace std;

class CoinInfo{
private:
    int total;

public:
    string name;
    int value;

// void setTotal(int total){
//     this->total=total;
// }
// int getTotal(){
//     return this->total;
// }

CoinInfo(string coinadi, int coindegeri, int total){
    name = coinadi;
    value = coindegeri;
    this->total=total;
}
void showInfo(){
    cout << "The name of coin is " << this->name << endl;
    cout << "The value of " << this->name << " is " << this->value << endl;
    cout << "You have " << this->total << " " << this->name << endl;
}

};


int main(){

CoinInfo bitcoin("BTC", 45500,2);
bitcoin.showInfo();

    return 0;
}