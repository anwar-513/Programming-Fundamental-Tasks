#include<iostream>
using namespace std;

int main()
{
    long int number;
    long int square;

    cout << "Enter the number---> ";
    cin >> number;

    square = number * number;

    long int tempNumber = number;
    long int tempSquare = square;

    bool flag = true;

    while (tempNumber > 0)
    {
        if (tempNumber % 10 != tempSquare % 10)
        {
            flag = false;
            break;
        }

        tempNumber /= 10;
        tempSquare /= 10;
    }

    if (flag)
        cout << "The number is Automorphic.";
    else
        cout << "The number is not Automorphic.";

    return 0;
}
