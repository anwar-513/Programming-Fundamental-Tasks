#include<iostream>
using namespace std;

float sum(int[], int);
float average(int,int);

int main()
{
    int subjects;

    cout<<"How many subjects are there---> ";
    cin>>subjects;

    int subjectsMarks[subjects] = {0};
    string subjectsName[subjects];


    for(int i = 0; i < subjects; i++)
    {
        cout<<"What is subject No."<<i+1<<"---> ";
        cin>>subjectsName[i];
    }

    for(int j = 0; j < subjects; j++)
    {
        cout<<"Enter the obtained marks of "<<subjectsName[j]<<"---> ";
        cin>>subjectsMarks[j];
    }

    cout<<"S.no\t\tSubject\t\tMarks"<<endl;
    cout<<"-------------------------------------"<<endl;
    for(int k = 0; k < subjects; k++)
    {
        cout<<k+1<<"\t\t"<<subjectsName[k]<<"\t\t"<<subjectsMarks[k]<<endl;
    cout<<"-------------------------------------"<<endl;
    }
    int total = sum(subjectsMarks,subjects);
    cout<<"Total marks\t\t\t"<<total<<endl;
    cout<<"Average\t\t\t\t"<<average(total,subjects)<<endl;


    return 0;
}


float sum(int array[], int subjects)
{
    int sum = 0;

    for(int i = 0; i < subjects; i++)
    {
        sum = sum + array[i];
    }

    return sum;
}


float average(int total,int subjects)
{
    int average = 0;

    average = total / subjects;

    return average;
}