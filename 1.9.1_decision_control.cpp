#include<iostream>
using namespace std;
int main()
{
    int number;
    char character;
    int value = 0;

    cout<<"Enter the number---> ";
    cin>>number;

    if(number < 0 )
    {   
        value = ((number - number) - number) - 1;
        cout<<"\nvalue\t\t"<<value;
    }
    else if(number > 1 && number % 2 == 0)
    {
        value = number +(number * (number/2));
        cout<<"\nvalue\t\t"<<value;
    }
    else if(number % 5 == 0)
    {
        value = number * 2;
        cout<<"\nvalue\t\t"<<value;
    }
    else
    {
        value = 0;
        cout<<"\nvalue\t\t"<<value;
    }

    cout<<"\n(e) for even/odd."<<endl;
    cout<<"(d) for if divisible by 3."<<endl;
    cout<<"(s) checking sign."<<endl;

    cout<<"\n Enter the character for operation---> ";
    cin>>character;

    switch (character)
    {
    case 'e':
        if(value % 2 == 0)
            cout<<"The number is even.";
        else if(value == 0)
            cout<<"The number is zero.";
        else
            cout<<"The number is odd.";    // intentional fallthrough
        case 'f':
    case 'd':
        if(value % 3 == 0)
        {
            cout<<"The number is divisible by three"<<endl;
            value /= 3;
            cout<<"The value of the number divisible by 3 is "<<value;
        }
        else
            cout<<"it is not divisible by 3.";
    case 's':
        if (value < 0)
            cout<<"the number is positive.";
        else
            cout<<"the number is negative.";        
    default:
        break;
    }
    return 0;
}