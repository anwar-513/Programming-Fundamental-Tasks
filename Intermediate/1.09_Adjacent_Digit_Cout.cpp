#include <iostream>
using namespace std;

int main()
{
    /*You are given an array of N integers and an integer K.
     Count the number of adjacent pairs (A[i], A[i+1]) such
     that the absolute difference between them is exactly K.
     */

    int elements = 0;
    int target = 0;
    int count = 0;

    cout << "Enter the number of element of the array----> ";
    cin >> elements;

    if (elements < 2)
    {
        cout << "The array must have more than 2 element for pairing.....";
        return 0;
    }

    cout << "Enter the interger for operation---> ";
    cin >> target;

    int array[elements] = {0};
    for (int i = 0; i < elements; i++)
    {
        cout << "Enter the " << i << "th element of the array---> ";
        cin >> array[i];
    }

    for (int i = 0; i < elements - 1; i++)
    {
        int difference = array[i] - array[i + 1];
        if (difference < 0)
        {
            difference = (difference * (-1));
        }

        if (difference == target)
        {
            count++;
        }
    }

    cout << "The difference of " << count << " pairs is " << target << endl;

    return 0;
}