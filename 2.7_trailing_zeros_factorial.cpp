#include<iostream>
using namespace std;

double factorial(double number);
int trailingZeros(int);

int main()
{
    double factorialN;
    int number;
    int trailingzeros;

    cout<<"Enter the number for factorial---> ";
    cin>>number;

    factorialN = factorial(number);
    trailingzeros = trailingZeros(number);

    cout<<"factorial of the given number is "<<factorialN<<endl;
    cout<<"The trailing zero of the given number's factorial is "<<trailingzeros<<endl;
    
    return 0;
}

double factorial(double number)
{
    double fact = 1;
    for(int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int trailingZeros(int fact)
{
    int count = 0;

    while (fact >= 5)
    {
        count += fact / 5;
        fact = fact / 5;
    }
    return count;
}