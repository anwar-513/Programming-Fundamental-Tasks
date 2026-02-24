#include<iostream>
using namespace std;
int main()
{
    char choice;
    float salary;

    cout<<"Enter 'S' or 's' if you are senior aditor.";
    cout<<"\nEnter 'J' or js' if you are junior aditor.";

    cout<<"\n Enter your rank---->";
    cin>>choice;

    switch(choice)
    {
        case 's':
        cout<<"\nas you are a senior editor";
        salary = 400 * 30;
        cout<<"\n\n your salary is "<<salary<<" of this month.";
        break;
        
        case 'S':
        cout<<"\nas you are a senior editor";
        salary = 400 * 30;
        cout<<"\n\n your salary is "<<salary<<" of this month.";
        break;
        
        case 'J':
        cout<<"\nas you are a junior editor";
        salary = 200 * 30;
        cout<<"\n\n your salary is "<<salary<<" of this month.";
        break;

        case 'j':
        cout<<"\nas you are a junior editor";
        salary = 200 * 30;
        cout<<"\n\n your salary is "<<salary<<" of this month.";
        break;
        default:
        cout<<"invalid entry!";
    }

    

    return 0;
}