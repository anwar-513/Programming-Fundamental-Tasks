#include <iostream>
using namespace std;

int main()
{
    int round;
    cout << "Enter number of rounds: ";
    cin >> round;

    char array[round];

    int wins = 0;
    int longestStreak = 0;
    int streakOccurs = 0;

    for (int i = 0; i < round; i++)
    {
        cout << "Enter 'W' for Win and 'L' for Loss: ";
        cin >> array[i];

        if (array[i] == 'W' || array[i] == 'w')
        {
            wins++;
        }
        else if (array[i] == 'L' || array[i] == 'l')
        {
            if (wins > longestStreak)
            {
                longestStreak = wins;
                streakOccurs = 1;
            }
            else if (wins == longestStreak && wins != 0)
            {
                streakOccurs++;
            }

            wins = 0;
        }
    }

    if (wins > longestStreak)
    {
        longestStreak = wins;
        streakOccurs = 1;
    }
    else if (wins == longestStreak && wins != 0)
    {
        streakOccurs++;
    }

    cout << "\n\nLongest Winning Streak:    " << longestStreak << endl;
    cout << "Logest Streak Occurred Times:  " << streakOccurs << endl;

    return 0;
}