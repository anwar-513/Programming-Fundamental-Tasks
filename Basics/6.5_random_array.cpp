#include <iostream>
using namespace std;

int main()
{
    int scores[4] = {95, 88, 72, 91};

    int *ptr = scores;

    cout << "=======Displaying Array Elements Using Pointer==========" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Element " << i << " = " << *ptr << endl;
        ptr = ptr + 1;
    }
    return 0;
}