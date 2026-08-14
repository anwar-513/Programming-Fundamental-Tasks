#include<iostream>
using namespace std;

bool isRectangle(int, int, int, int);

int main()
{
    int ractangle;
    int side1;
    int side2;
    int side3;
    int side4;

    cout<<"Enter the length of the side1---> ";
    cin>>side1;
    cout<<"Enter the length of the side1---> ";
    cin>>side2;
    cout<<"Enter the length of the side1---> ";
    cin>>side3;
    cout<<"Enter the length of the side1---> ";
    cin>>side4;

    ractangle = isRectangle(side1, side2, side3, side4);

    if(ractangle)
        cout<<"a rectangle from the given sides is possible.";
    else
        cout<<"A rectangle fromt the given side is impossibel.";

    return 0;
}

bool isRectangle(int side1, int side2, int side3, int side4)
{
    if((side1 == side2 && side3 == side4) || (side1 == side3 && side2 == side4) 
    ||(side1 == side4 && side2 == side3))
        return 1;
    else
        return 0;
}
