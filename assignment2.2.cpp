//22.10.2021
//Ahmet Yasin ADA
//Lab Assignment#2-P2

#include<iostream>

using namespace std;

int main()
{
    char character;

    cout<<"Please enter a character: "<<endl;
    cin>>character;
    
    if (character >= 65 && character <= 96) //if (character >= 'A' && character <= 'B')
    {
        character = character + 32;
        cout<<character<<endl;
    }
    else if (character >= 'a' && character <= 'z')
    {
        character = character - 32;
        cout<<character<<endl;
    }else
    {
        cout<<"Please enter a valid character!"<<endl;
    }

    return 0;
}