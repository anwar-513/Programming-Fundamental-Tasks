#include<iostream>
using namespace std;

// void printSecondVariable(int &value);
// void printSpecialIndx(int array[]);


int main()
{
    int* ptr;

    cout<<ptr<<endl;
    cout<<&ptr<<endl;

    int value = *(int*)0x401a5b;
    cout << value;

    return 0;
}


// void printSecondVariable(int &value)
// {
//     int value_1 = 20;
//     int value_2 = 30;

//     int *ptr = &value_1;
//     ptr = &value_2;

//     cout<<*ptr;
// }
// void printSpecialIndx(int array[])
// {
//     int* ptr = array;

//     cout<<*ptr + 4;
// }