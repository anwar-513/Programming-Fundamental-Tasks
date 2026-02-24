#include<iostream>
using namespace std;

void Pattern();

int main()
{
    Pattern();

    return 0;
}

void pattern()
{
    for(int row= 1; row <= 10; row++)
    {
        for(int col= 1; col <= row; col++)
        {
            cout<<col * row <<" ";
           
        }
        cout<<endl;
    }

}