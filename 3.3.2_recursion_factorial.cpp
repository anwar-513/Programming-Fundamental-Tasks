#include<iostream>
using namespace std;

int recursion(int, int, int);

int main()
{
    int number;
    int counter = 1;
    int factorial = 1;

    cout<<"Enter the number---> ";
    cin>>number;

    cout<<recursion(number, factorial, counter);

    return 0;
}

int recursion(int number,int factorial, int counter)
{
    
    if(counter<= number)
    {
        
        factorial = counter * factorial;
        recursion(number, factorial, counter++);
    }
    
    return factorial;
}
