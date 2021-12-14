#include<iostream>

using namespace std;

void func();

int main()
{
    func();
    func();
    func();

    return 0;
}

void func()
{
int num = 3;
auto int count = 0;
num++;
count++;
cout << "num = " << num << " and " << "count = " << count << endl;
}