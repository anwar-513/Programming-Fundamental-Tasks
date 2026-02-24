#include<iostream>
using namespace std;

int Factorial();

int main()
{

    cout<<Factorial();

    return 0;
}

int Factorial()
{
    int  number = 5;
    int factorial = 1;

    for(int i = 1; i <= number; i++)
    {
        factorial = factorial*i;
    }

    return factorial;
}