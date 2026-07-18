#include <iostream>
using namespace std;

int main()
{
    int elements = 0;

    cout << "Enter the elements of the array---> ";
    cin >> elements;

    if (elements < 2)
    {
        cout << "The Array's element must be greater than or equal to 2....." << endl;
        return 0;
    }

    int* array = new int[elements];
    for (int i = 0; i < elements; i++)
    {
        cout << "Enter the " << i << "th element of the array---> ";
        cin >> array[i];
    }

    cout << "The given array : ";
    for (int i = 0; i < elements; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    int freq_size = elements - 1;
    int* frequency = new int[freq_size];
    for (int i = 0; i < freq_size; i++)
    {
        frequency[i] = array[i + 1] - array[i];
    }

    int count = 0;
    for (int i = 0; i < freq_size - 1; i++)
    {
        if (frequency[i] == frequency[i + 1])
        {
            count++;
        }
    }

    cout << "Number of adjacent matching differences: " << count << endl;

    delete[] array;
    delete[] frequency;

    return 0;
}