#include<iostream>
using namespace std;

int main()
{
    int first = 0;
    int number;
    int series = 0;
    int second = 1;

    cout<<"Enter the number ---> ";
    cin>>number;

    for(int i = 1; i <= number; i++)
    {
        if(i % 3 == 0)
        {
            series = first + second;
            first = second;
            second = series;
            cout<<"skiped ";
            continue;
        }

        cout<<first<<"  ";
        series = first + second;
        first = second;
        second = series;

    }
    



}