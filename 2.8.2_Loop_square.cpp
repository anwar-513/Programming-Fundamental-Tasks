#include<iostream>
using namespace std;

int main()
{
    int number;
    int square;

    cout<<"Enter the number---> ";          //  ******************************************
    cin>>number;                            //  * square of all number upto given number *
    for(int i = 1; i <= number; i++)        //  ******************************************
    {
        square = i * i;
        cout<<"The square of "<<i<<" is "<<square<<endl;
    }


    return 0;
}