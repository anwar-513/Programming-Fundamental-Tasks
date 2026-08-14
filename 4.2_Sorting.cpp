#include <iostream>
using namespace std;

void printArray(int arr[], int size);
void bubbleSort(int arr[], int size);
void selectionSort(int arr[], int size);



int main()
{
    int size;
    cout << "Enter size of the array---> ";
    cin >> size;

    int array[size];

    for(int i = 0; i < size; i++)
    {
        cout<<"Enter the element for index number "<<i<<" ---> ";
        cin >> array[i];  
    }

    cout << "\nOriginal Array:\n";
    printArray(array, size);
    cout<<" bubble sorted \n";
    bubbleSort(array, size);
    cout<<" selection sorted \n";
    selectionSort(array, size);

    return 0;
}


void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int size)
{
    int comparison = 0;

    for(int i = 0; i < size-1; i++)
    {
         for(int j = 0; j < size-i-1; j++)
        {
            comparison++;

            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "The total number of camprisons is "<<comparison<<endl;
    printArray(arr, size);
}

void selectionSort(int arr[], int size)
{
    int comparison = 0;

    for(int i = 0; i < size - 1; i++)
    {
        int minIndex = i;

        for(int j = i + 1; j < size; j++)
        {
            comparison++;

            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Total number of comprisons is "<<comparison<<endl;
    printArray(arr, size);
}
