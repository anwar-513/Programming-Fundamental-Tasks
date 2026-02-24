#include<iostream>
using namespace std;

int main()
{
    int first = 1;
    int number;
    int series ;
    int second = 2;

    cout<<"Enter the number ---> ";
    cin>>number;

    for(int i = 1; i <= number; i++)
    {
        cout<<first<<"  ";
        series = first + (second * 2);
        first = second;
        second = series;
    }

    return 0;

}