#include<iostream>
using namespace std;
int main()
{
    char character;

    cout<<"Enter any key---> ";
    cin>>character;

    if(character >= 'a' && character <= 'z')
    {
        cout<<"it is lowercase";
    }
    else if(character >= 'A' && character <= 'Z')
    {
        cout<<"it is uppercase.";
    }
    else if(character >= 48 && character <= 57)
    {
        cout<<"it is a digit.";
    }
    else
    {
        cout<<"it is special character.";
    }

    return 0;
}