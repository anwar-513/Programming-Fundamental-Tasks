#include<iostream>
using namespace std;

void YearDistribution(int);


int yy1;
int yy2;

int main()
{
    int day;
    int month;
    int year;

    cout<<"Enter the date of your birth(DD)---> ";
    cin>>day;
    cout<<"Enter the month of your birth(MM)---> ";
    cin>>month;
    cout<<"Enter the year of your birth(YYYY)---> ";
    cin>>year;

    YearDistribution(year);

    cout<<"\n\n Your Magic Square of Birthday ."<<endl;

    cout<<day<<"\t"<<month<<"\t"<<yy1<<"\t"<<yy2<<endl;
    cout<<yy2+1<<"\t"<<yy1-1<<"\t"<<month-3<<"\t"<<day+3<<endl;
    cout<<month-2<<"\t"<<day+2<<"\t"<<yy2+2<<"\t"<<yy1-2<<endl;
    cout<<yy1+1<<"\t"<<yy2-1<<"\t"<<day+1<<"\t"<<month-1<<endl;
    



    return 0;
}



void YearDistribution(int year)
{
    yy2 = year % 100;

    year = year / 100;

    yy1 = year % 100;
}