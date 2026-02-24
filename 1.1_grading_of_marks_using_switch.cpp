#include<iostream>
using namespace std;
int main()
{
    int marks;

    cout<<"enter your marks---> ";
    cin>>marks;

    if(marks < 0 || marks > 100)
    {
        cout<<"invalid marks entered!";
        return 0;
    }

    switch (marks / 10)
    {
    case 10:
    case 9:
        cout<<"grade is A+";
        break;
    case 8:
        cout<<"grade is A";        
        break;
    case 7:
        cout<<"grade is B";
        break;
    case 6:
        cout<<"grade is C";
        break;
    case 5:
        cout<<"grade is D";
        break;
    default:
        cout<<"failed";
        break;
    }

    return 0;
}