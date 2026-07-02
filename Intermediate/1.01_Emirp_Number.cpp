#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;

    int limit = sqrt(num);
    for (int i = 3; i <= limit; i += 2)
    {
        if (num % i == 0)
            return false;
    }


    return true;
}

int main()
{
    /*Emirp Number, those prime numbers which when reversed give another prime number but are not palindromic*/

    int number;
    int tester;
    int unit = 0;
    int reverse = 0;

    cout << "Enter Number for testing---> ";
    cin >> number;

    /*Checking if prime*/

    if (!isPrime(number))
    {
        cout << "The entered number is neither prime nor Emirp.." << endl;
        return 0;
    }

    /*Reversing Number*/
    tester = number;
    while (tester > 0)
    {
        unit = tester % 10;
        reverse = reverse * 10 + unit;
        tester = tester / 10;
    }

    if (number == reverse)
    {
        cout << "Ther entered number is prime but not an Emirp..." << endl;
        return 0;
    }

    if (isPrime(reverse))
    {
        cout << "You have entered an Emirp Number...." << endl;
    }
    else
    {
        cout << "The entered Number is prime but not an Emirp..." << endl;
    }

    return 0;
}
