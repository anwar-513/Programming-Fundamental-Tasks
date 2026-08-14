#include<iostream>
using namespace std;
int main()
{
    int first = 0;
    int number;
    int second = 1;
    int series = 0;

    cout<<"Enter the number---> ";
    cin>>number;

    for(int i = 1; i <= number; i++)
    {
        cout<<first<<" ";
        series = first + second;
        first = second;
        second = series;
        
    }


    return 0;
}