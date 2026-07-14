#include <iostream>
using namespace std;

int main()
{
    int numA;
    int numB;
    short count = 0;

    cout << "Enter the first Number---> ";
    cin >> numA;

    cout << "Enter the second number---> ";
    cin >> numB;

    for (int i = 0; i < 100; i++)
    {
        if (numA == numB || count == 100)
        {
            break;
        }


        if (numA == (numB - 3))
        {
            numA += 3;
            cout << "Adding 3  = " << numA << endl;
            count++;
            cout << count << "th iteration Completed by For loop " << endl<< endl;
        }

        else if (numA <= (numB / 2) && numB < (numA * 2))
        {
            numA = numA * 2;

            cout << "Multiply by 2  = " << numA << endl;
            count++;
            cout << count << "th iteration Completed by For loop " << endl<< endl;
        }

                while (numA > numB)
        {
            numA = numA - 1;
            cout << "Negative 1  = " << numA << endl;
            count++;
            cout << count << "th iteration Completed by While loop " << endl<< endl;
            if(count == 100) break;
        }

    }

    if (count < 100)
    {
        cout << numA << endl;
        cout << "Found after " << count << " iteration." << endl<< endl;
    }
    else
    {
        cout << "Failed" << endl;
    }

    return 0;
}