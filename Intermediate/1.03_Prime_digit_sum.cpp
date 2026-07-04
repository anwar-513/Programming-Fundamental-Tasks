#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number)
{
        if (number   <= 1)
        return false;
    if (number == 2)
        return true;
    if (number % 2 == 0)
        return false;

    int limit = sqrt(number);
    for (int i = 3; i <= limit; i += 2)
    {
        if (number % i == 0)
            return false;
    }


    return true;
}

int main()
{
    /*When the sum of digits of a given number is prime is it known as Prime digit sum*/
    int number;
    int unit = 0;
    int sum = 0;

    cout<<"Enter the number---> ";
    cin>>number;

    while(number > 0)
    {
        unit = number % 10;
        sum = sum + unit;
        number = number / 10;
    }

    cout<<"The sum of given number is "<<sum<<endl;

    if(isPrime(sum))
    {
        cout<<"The given number is Prime digit sum"<<endl;
    }
    else
        cout<<"The given number is not a prime digit sum"<<endl;



    return 0;
}