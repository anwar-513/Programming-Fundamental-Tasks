#include <iostream>
using namespace std;

int main()
{
    int marks[10] = {56, 76, 46, 87, 37, 92, 58, 81, 79, 71};

    int average;
    int aboveAverage = 0;
    int sum = 0;
    int highestMarks = 0;
    int secondHighestMarks = 0;

    for (int i = 0; i < 10; i++)
    {
        sum += marks[i];
    }
    average = sum / 10;
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] > average)
        {
            aboveAverage++;
        }
        if (marks[i] > highestMarks)
        {

            secondHighestMarks = highestMarks;
            highestMarks = marks[i];
        }
    }

    cout << "The Highest Marks:          " << highestMarks << endl;
    cout << "The Second Highest Marks:   " << secondHighestMarks << endl;
    cout << "The Marks Average:          " << average << endl;

    return 0;
}