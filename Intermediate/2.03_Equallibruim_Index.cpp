#include <iostream>
using namespace std;

int main()
{
    int elements;
    int target;
    bool found = false;

    cout << "Enter the size of Array---> ";
    cin >> elements;

    int array[elements] = {0};

    for (int i = 0; i < elements; i++)
    {
        cout << "Enter the " << i << "th element of the array---> ";
        cin >> array[i];
    }

    for (int i = 0; i < elements; i++)
    {
        int rightIndex = 0;
        int leftIndex = 0;

        for (int j = 0; j < elements; j++)
        {
            if (j < i)
            {
                leftIndex += array[j];
            }
            else if (j > i)
            {
                rightIndex += array[j];
            }
        }
        if (leftIndex == rightIndex)
        {
            target = array[i];
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "The array has no equilibrium Index!!!.";
    }
    else
    {
        cout << "The equilibrium Index value is " << target << endl;
    }
    return 0;
}