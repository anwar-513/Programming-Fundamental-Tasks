#include<iostream>
using namespace std;

double average(int);


int main()
{
    int number;

    cout<<"Enter the number of quizes---> ";
    cin>>number;

    while(number < 1 || number > 10)
    {
        cout<<"Too few or too many quizes. "<<endl;
        cout<<"Enter the number of quizes---> ";
        cin>>number;
    }
    cout<<"The average of your marks is "<<average(number);
  

    
    return 0;
}

double average(int number)
{
    double sum = 0;
    double average;

    float quiz[number];

    for(int i = 0; i < number; i++)
    {
        cout<<"Enter the marks of quiz "<<i+1<<"---> ";
        cin>>quiz[i];
        sum = sum + quiz[i];
    }
    
    average = sum / number;
    
    return average;
}