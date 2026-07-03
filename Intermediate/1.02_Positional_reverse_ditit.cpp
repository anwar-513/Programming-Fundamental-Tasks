#include <iostream>
#include <string>
using namespace std;

int getReverse(int number)
{
    int unit;
    int reverse = 0;
    while (number > 0)
    {
        unit = number % 10;
        reverse = reverse * 10 + unit;
        number = number / 10;
    }

    return reverse;
}

int main()
{
    /*Given an integer N, reverse and print only the digits at odd positions from the
    right, ignoring the digits at even positions.*/

    int number;
    int counter = 0;
    int unit = 0;
    int target = 0;
    int reverse = 0;

    cout << "Enter the number---> ";
    cin >> number;

    while(number > 0)
    {
        unit = number % 10;
        number = number / 10;
        counter++;
        if(counter % 2 == 0)
            continue;
        target = target * 10 + unit;
    }

    unit = 0;
    while(target > 0)
    {
        unit = target % 10;
        reverse = reverse * 10 + unit;
        target = target / 10;
    }

    cout << reverse;

    return 0;
}