/*
We will arrange the teams for our game.
We will ask the user for the number of teams and the number of players.
Ahmet Yasin Ada 
*/

#include <cstdlib> 
#include <ctime> 
#include <iostream>

using namespace std;

int main()
{
    srand((unsigned)time(0)); 

    int numberOfPlayer, numberOfTeam, randomNumbers;
    int a, i, r, random;

    cout<<"Please enter number of player: "<<endl;
    cin>>numberOfPlayer;

    cout<<"Please enter number of team: "<<endl;
    cin>>numberOfTeam;

    int control[randomNumbers];
    string players[numberOfPlayer];
    string teams[numberOfTeam];

    // cout<<"teams:"<<endl;

    for ( a = 0; a < numberOfTeam; a++)
    {
        teams[a] = "Team " + to_string(a+1);
    }
    
    // for (a = 0; a < numberOfTeam; a++)
    // {
    //     cout<<teams[a]<<"\t";
    // }
    // cout<<endl;
    
    cout<<"Please enter names of the players: "<<endl;

    for ( i = 0; i < numberOfPlayer; i++)
    {
    cin>>players[i];
    }
    //  cout<<"Players:"<<endl;
    //  for ( i = 0; i < numberOfPlayer; i++)
    //  {
    //      cout<<players[i]<<endl;
    //  }

    for ( r = 0; r < numberOfPlayer; r++)
    {
        random = (rand() % numberOfPlayer);
        control[r] = random;
        for (int j = 0; j <= r; j++)
        {
            if ( j == control[r])
            {
                  
            }
        }   
    }
    

    return 0;
}