//A void function with a parameter
#include<iostream>

using namespace std;

void pattern(int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<<"*";
        }
        cout<<endl; 
    }  
}
int main(){
    int patternSize;
    cout <<"please enter number of size: \n";
    cin >> patternSize;

    pattern(patternSize);

    return 0;
}