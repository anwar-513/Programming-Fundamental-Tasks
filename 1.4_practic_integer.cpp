#include<iostream>
using namespace std;
int main()
{
    int number;

    cout<<"Enter number---> ";
    cin>>number;

    while(number < 0 || number > 100)
    {
        cout<<"invalid entry."<<endl;
        cout<<"enter valid number---> ";
        cin>>number;
    }

    if(number < 50)
    {
        cout<<"It is smaller number.";
    }
    else if (number > 50)
    {
        cout<<"it is medium number.";
    }

    number = number % 10;

    switch (number)
    {
    case 1:
        cout<<"number is end with 1.";
        break;
    case 2:
        cout<<"number is end with 2.";
        break;
    case 3:
        cout<<"number is end with 3.";
        break;
    case 4:
        cout<<"number is end with 4.";
        break;
    case 5:
        cout<<"number is end with 5.";
        break;
    case 6:
        cout<<"number is end with 6.";
        break;
    case 7:
        cout<<"number is end with 7.";
        break;
    case 8:
        cout<<"number is end with 8.";
        break;
    case 9:
        cout<<"number is end with 9.";
        break;
    default:
        cout<<"number is end with 0.";
        break;
    }

    return 0;
}