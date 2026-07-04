#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int number)
{
    if(number <= 1) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;

    int limit = 0;
    limit = sqrt(number);
    for(int i = 3; i <= limit; i +=2)
    {
        if(number % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int number;
    int unit = 0;
    short counter = 0;

    cout<<"Enter the number----> ";
    cin>>number;

    while(number > 0)
    {
        unit = number % 10;
        if(isPrime(unit)) counter++;
        number = number / 10;
    }

    cout<<"The prime digit in the given number is "<<counter<<endl;
    
    return 0;
}