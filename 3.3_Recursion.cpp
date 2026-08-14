#include<iostream>
using namespace std;

void recursion();

int counter = 1;

int main()
{
    recursion();

    return 0;
}

void recursion()
{
    if(counter<=10)
    {
    cout<<counter<<" ";
    counter++;
    recursion();
    }
}