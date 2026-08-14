#include<iostream>
using namespace std;

void LeftSideDown();
void LeftSideUp();
void RightSideDown();
void RightSideUp();

int main()
{
    LeftSideDown();
    cout<<endl;
    
    LeftSideUp();
    cout<<endl;

    RightSideDown();
    cout<<endl;

    RightSideUp();
    cout<<endl;

    return 0;
}



void LeftSideUp()
{
    for(int i = 1; i <= 5; i++)                     // *
    {                                               // **
        for(int j = 1; j <= i; j++)                 // ***
        {                                           // ****
            cout<<"*";                              // *****
        }
        cout<<endl;
    }
}


void LeftSideDown()
{
    for(int i = 5; i >= 1; i--)             // *****
    {                                       // ****
        for(int j = 1; j <=i; j++)          // ***
        {                                   // **
            cout<<"*";                      // *
        }
        cout<<endl;
    }
}


void RightSideDown()
{
        for(int i = 5; i >= 1; i--)
    {
        for(int j = 5; j > i; j--)          // *****
        {                                   //  ****
            cout<<"  ";                     //   ***
        }                                   //    **
        for(int k = 1; k <= i; k++)         //     *
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void RightSideUp()
{
    for(int i = 5; i >= 1; i--)
        {
            for(int j = 1; j <= i-1; j++)           //     *
        {                                           //    **
            cout<<" ";                              //   ***
        }                                           //  ****
        for(int k = 5; k >= i; k--)                 // *****
        {
            cout<<"*";
        }
        cout<<endl;
    }    
}