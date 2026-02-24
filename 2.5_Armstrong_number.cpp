#include<iostream>
#include<cmath>
using namespace std;

int digitcount(int);
bool armstrong(int,int);

int main()
{
    int digit;
    int number;

    cout<<"Enter the number---> ";
    cin>>number;

    digit = digitcount(number);
    if(armstrong(number,digit))
         cout<<"The number is armstong.";
    else
         cout<<"The number is not armstong.";

    return 0;
}

int digitcount(int number)
{
    int count = 0;
    while(number)
    {
        count++;
        number = number / 10;

    }
    return count;
}

bool armstrong(int number, int digit)
{
    double answer = 0;
    int num = number;
    int remaining ;

    while(num)
    {
        remaining = num % 10;
        num = num / 10;
        answer = answer + pow(remaining, digit);
    }

    if(answer == (double)number)
        return 1;
    else 
        return 0;
}