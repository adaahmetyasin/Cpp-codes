#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    int low = 5, high = 15;
    int tryLimit = 5;
    int guess;

    srand(time(0));
    int temp = rand();
    int num = temp % (high - low + 1) + low;

    int counter = 1;
    bool found = false;
    while (counter <= tryLimit && !found)
    {
        do
        {
            cout << "Please enter your guess between 5 and 15(inclusive): ";
            cin >> guess;
        } while (guess < 5 || guess > 15);

        if (guess == num)
        {
            found = true;
        }

        else if (guess > num)
        {
            cout << "Your guess was too high!" << endl;
        }

        else
        {
            cout << "Your guess was too low!" << endl;
        }
        counter++;
    }
    if (found) 
    {
    cout << "Congratulation: You found it. \n";
    cout << "The number was: " << num << endl; 
    }
    else
    {
        cout << "Sorry, you did not find it! \n"; 
        cout << "The number was: " << num << endl;
    }
    
    return 0;
}