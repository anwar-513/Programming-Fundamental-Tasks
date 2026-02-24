#include <iostream>
using namespace std;
int main()
{
    float x, y;

    cout << "Enter the x-coordinate: ";
    cin >> x;
    cout << "Enter the y-coordinate: ";
    cin >> y;

    if (x == 0)
    {
        if(y == 0)
        {
            cout<<"the point lies on origin.";
        }
        else
            cout<<"the point lies on y-axis.";
    }
    else if (x > 0 && y > 0)
    {
        cout<<"first quardant.";
    }
    else if (x < 0 && y < 0)
    {
        cout<<"third quardant.";
    }
    else if (x > 0 && y < 0)
    {
        cout<<"forth quardant.";
    }
    else if (x < 0 && y > 0)
    {
        cout<<"second quardant.";
    }
    else
        cout<<"x-axis";

    
    return 0;
}
