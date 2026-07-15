#include <iostream>
using namespace std;

int main()
{
    int elements = 0;

    cout << "Enter the number of element of the Array--->";
    cin >> elements;

    int array[elements] = {0};
    for (int i = 0; i < elements; i++)
    {
        cout << "Enter the " << i << "th element of the array---> ";
        cin >> array[i];
    }
    cout << "The given Array: " << endl;

    for (int i = 0; i < elements; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    int leader = array[elements - 1];
    cout << "The leaders of the Array are: ";
    for (int i = elements - 1; i >= 0; i--)
    {
        if (array[i] >= leader)
        {
            leader = array[i];
            cout << leader << " ";
        }
    }

    return 0;
}