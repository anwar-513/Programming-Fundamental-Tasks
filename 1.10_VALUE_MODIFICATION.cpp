#include<iostream>
using namespace std;
int main()
{
    int modulo;
    int number;
    int value = 0;
    char choice;

    cout<<"Enter the number---> ";
    cin>>number;

    if(number > 10 && number % 2 == 0)
    {
        for(int i = 0; i <= number; i++)
            {
                value += i; 
            }
                cout<<"The sum is "<<value;

    }
    else if(number < 10 && number % 3 == 0)
    {
        value = (value * value) + 5;
        cout<<"The value is "<<value;
    }
    else
    {
        value = value + 2;
        cout<<"The value is "<<value;
    }

    cout<<"(s) for sign check(positive or negative)";
    cout<<"(t) for truncation";
    cout<<"(m) for modulo ";

    cout<<"Enter the choice---> ";
    cin>>choice;

    switch (choice)
    {
    case 's':
        if(value < 0)
            {
                cout<<"value is a negative number.";
            }
        else if(value > 0)
            {
                cout<<"value is positive number.";
            }
        else
            cout<<"value is zero.";
        case 't':
            value = (short)value;
            cout<<"\nthe value is "<<value<<" after truncation.";
            break;
        case 'm':
            cout<<"\n Enter the number for modulo---> ";
            cin>>modulo;
            value = value % modulo;
            cout<<"\nthe value after modulo is "<<value;
    
    default:
        break;
    }

    return 0;
}