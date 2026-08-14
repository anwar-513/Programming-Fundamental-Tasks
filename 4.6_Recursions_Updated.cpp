#include <iostream>
#include<math.h>
using namespace std;

void printNumbers(int);
int factorial(int number);
int sum(int number);
int countDigit(int number);
int square(int number);
int GreatestCommonDivisor(int number, int number2);

int main()
{
    int number;
    int number2;

    cout<<"Enter the number---> ";
    cin>>number;

    cout<<"numbers upto that number is "<<endl;
    printNumbers(number);
    cout<<"\n factorial of the given number is "<<endl;
    cout<<"    "<<factorial(number)<<endl;
    cout<<"\n the sum of nutral number upto given number."<<endl;
    cout<<"     "<<sum(number)<<endl;
    cout<<"\n The given number is of the following digit/s."<<endl;
    cout<<"     "<<countDigit(number)<<endl;
    cout<<"\n the square of the given number is."<<endl;
    cout<<"     "<<square(number)<<endl;

    cout<<"Enter the 2nd number for operation---> ";
    cin>>number2;
    cout<<GreatestCommonDivisor(number,number2);
}

void printNumbers(int n)
{
    if(n == 0)
        return;
    printNumbers(n - 1);
    cout<<n<<" ";
}

int factorial(int number)
{
    if(number == 0)
        return 1;
    return number * (factorial(number-1));
}

int sum(int number)
{
    if(number == 0)
        return 0;
    return number + sum(number - 1);
}

int countDigit(int number)
{
    if(number == 0)
        return 0;
    return 1 + countDigit(number / 10);
}


int square(int number)
{
    if (number == 0)
        return 0;

    return square(number-1) + (2*number) - 1;
}


int GreatestCommonDivisor(int number, int number2)
{

    if(number2 == 0)
        return number;

    return GreatestCommonDivisor(number2, number % number2);
    
}
