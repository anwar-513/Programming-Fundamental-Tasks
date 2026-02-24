#include<iostream>
using namespace std;

void Add();
void Division();
void Multiplication();
void Subtract();


int main()
{
    Add();
    Subtract();
    Multiplication();
    Division();

    return 0;
}

void Add()
{
    int number1 = 10;
    int number2 = 2;
    int sum = 0;

    sum = number1 + number2;
    cout<<"The addition of "<<number1<<" and " <<number2<<" is "<<sum;

}

void Subtract()
{
    int number1 = 10;
    int number2 = 2;
    int subtraction = 0;

    subtraction = number1 - number2;
    cout<<"\n\nThe subration of "<<number2<<" from " <<number1<<" is "<<subtraction;

}

void Multiplication()
{
    int number1 = 10;
    int number2 = 2;
    int multiplication = 0;

    multiplication = number1 * number2;
    cout<<"\n\nThe multiplication of "<<number1<<" and " <<number2<<" is "<<multiplication;

}

void Division()
{
    int number1 = 10;
    int number2 = 2;
    int division = 0;

    division = number1 / number2;
    cout<<"\n\nThe division of "<<number1<<" by " <<number2<<" is "<<division;

}