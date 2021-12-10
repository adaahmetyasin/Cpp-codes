#include<iostream>

using namespace std;

int main()
{
int size;
    cout << "Please enter number of rows: \n";
    cin >> size;

    for (int y = 0; y < size; ++y){

        for (int x = 0; x < size; ++x){
            int a = x;
            int b = y;
            if (a >= size / 2) a = size - a - 1;
            if (b >= size / 2) b = size - b - 1;

            int u = abs(a - size / 2);
            int v = abs(b - size / 2);
            int d = u > v ? u : v;
            int L = size / 2;
            if (size % 4 == 0) L--;

            if (y == x + 1 && y <= L) d++;

            printf((d + size / 2) % 2 == 0 ? "X" : " ");
        }
        cout << endl;

    }



    int num2;
    cout << "Please enter number of rows: \n";
    cin >> num2;

    for (int i = 1; i <= num2; i++)
    {   
        
        for (int j = 2*i; j <= (2*num2)-1; j++)
        {
            cout << " ";  
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= (num2-1); i++)
    {   
        for (int j = 1; j <= 2*i; j++)
        {
            cout << " ";
        }
        for (int j = i; j <= ((num2)-1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }


    int num3;

    cout << "Please enter number of the row: ";
    cin >> num3;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = i; j <= 2 ; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (num3-6)+2*i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = 1; i <= 1; i++)
    {
        for (int j = 1; j <= 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= num3-2; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = 1; i <= 3; i++)
    {
        for (int j = i; j <= 2 ; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (num3-6)+2*i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= num3-2*i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}   
