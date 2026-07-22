#include <iostream>
using namespace std;

int main()
{
    int length;
    bool found = false;

    cout << "Enter the Number of Elements of the Array---> ";
    cin >> length;

    if (length <= 0)
        return 0;

    int *array = new int[length];

    for (int i = 0; i < length; i++)
    {
        cout << "Enter the " << i << "th element of the array---> ";
        cin >> array[i];
    }

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (array[i] == array[j])
            {
                cout << "The first duplicate is " << array[i] << endl;
                found = true;
                break;
            }
        }

        if (found)
        {
            break;
        }
    }

    if (!found)
    {
        cout << "No duplicates found." << endl;
    }

    delete[] array;

    return 0;
}