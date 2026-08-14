#include<iostream>
#include<math.h>

const float PI = 3.14159;

using namespace std;
int main()
{  
    int number;
    int mode;
    int value;

    cout<<"Enter the Number---> ";
    cin>>number;

    if(number > 100)
    {
        value = ((static_cast<double>(number) * 1.5)) / (number % 17) + sqrt(number);
    }
    else if( number >= 50)
        value = (static_cast<double>(number) * number) / (number + 10);
    else
        value = (static_cast<double>(number) * 0.75) - 4.2;

    cout<<"\nEnter the mode(1-4)---> ";
    cin>>mode;

    switch (mode)
    {
    case 1:
        value = (static_cast<int>(value));
        cout<<"\nThe nearest integer is----> "<<value<<endl;
        break;
    case 2:
        value = (value - (static_cast<int>(value)));
        cout<<"\n the value in 2nd case is "<<value<<endl;
    case 3:
        value = value * PI;
        cout<<"\n the value in 3rd case is "<<value<<endl;
        break;
    case 4:
        value = (static_cast<int>(value) % 5);
        cout<<"\n the value in 4th case is "<<value<<endl;
        break;
    
    default:
        cout<<"Mode is out of range.";
        break;
    }

    return 0;
}