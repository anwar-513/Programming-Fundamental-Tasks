#include<iostream>
using namespace std;

int multiply(int,int);

int main()
{
    int number = 10;
    int result;

    for(int i =1; i<= number; i++)
    {
        result = multiply(i,i);
        cout<<i<<", "<<result<<endl;
    }

    return 0;
}

int multiply(int num1, int num2)
{
    int result;

    result =  num1 * num2;
    return result;
}