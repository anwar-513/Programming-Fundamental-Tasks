#include<iostream>
using namespace std;

void Add(int, int);
void Subtract(int, int);
void Multiplication(int, int);
void Division(int, int);

int main()
{
    int number1;
    int number2;

    cout<<"Enter the 1st number for calculation---> ";
    cin>>number1;
    cout<<"Enter the 2nd number for calculation---> ";
    cin>>number2;


    Add( number1, number2);
    Subtract(number1, number2);
    Multiplication(number1, number2);
    Division(number1, number2);

    return 0;
}

void Add(int number1, int number2)
{
    int sum = 0;

    sum = number1 + number2;
    cout<<"The addition of "<<number1<<" and " <<number2<<" is "<<sum;

}

void Subtract(int number1, int number2)
{

    int subtraction = 0;

    subtraction = number1 - number2;
    cout<<"\n\nThe subration of "<<number2<<" from " <<number1<<" is "<<subtraction;

}

void Multiplication(int number1, int number2)
{
    int multiplication = 0;

    multiplication = number1 * number2;
    cout<<"\n\nThe multiplication of "<<number1<<" and " <<number2<<" is "<<multiplication;

}

void Division(int number1, int number2)
{

    int division = 0;

    division = number1 / number2;
    cout<<"\n\nThe division of "<<number1<<" by " <<number2<<" is "<<division;

}