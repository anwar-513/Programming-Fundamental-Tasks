#include <iostream>
using namespace std;
int main()
{
    int unit, price;

    cout<<"Enter units used--> ";
    cin>>unit;

    if(unit < 100)
    {
        price = unit * 5;
        cout<<"total bill is "<<price;
    }
    else if(unit > 100 && unit <= 300)
    {
        price = unit * 7;
        cout<<"total bill is "<<price;
    }
    else
    {
        price = unit * 10;
        cout<<"total bill is "<<price;
    }

    return 0;
}