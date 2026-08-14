#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    int array[10] = { 12, 13, 5, 7, 9, 11, 15, 17, 19, 21 };

    
        cout <<" Elements " << setw(10) << "Values" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << setw(10) << i << setw(10) << array[i] << endl;

        
    }

    return 0;
}