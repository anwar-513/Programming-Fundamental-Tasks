/*          PROBLEM STATEMENT
Write a program to store the marks of n students in a vector<int> and display
them using indexing, iterators, and a range-based loop. Add three additional
marks using push_back(), then remove the last mark. Display the vector's size, 
capacity, first and last elements, and determine the highest and lowest marks 
without using sort().
*/


#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main()
{
    vector<int> marks;
    int students = 0;

    cout<<"Enter the Number of students---> ";
    cin>>students;

    if(students < 0 || students > 100)
    {
        return 0;
    }

    int mark;

        for(int i = 0; i < students; i++)
    {
        cout<<"Enter the "<<i+1<<" students marks---> ";
        cin>>mark;
        marks.push_back(mark);
    }

    // Displaying by indexing

    cout<<"Student 1 Marks:   "<<marks[0]<<endl;
    cout<<"Student 2 Marks:   "<<marks[1]<<endl;
    cout<<"Student 3 Marks:   "<<marks[2]<<endl;
    cout<<"Student 4 Marks:   "<<marks[3]<<endl;
    cout<<"Student 5 Marks:   "<<marks[4]<<endl;

    int counter = 1;
    // Displaying by iterator

    for(vector<int>::iterator it = marks.begin(); it != marks.end(); it++)
    {
        cout<<"Student "<< counter <<" Marks:   "<<*it<<endl;
        counter++;
    }

    // Displaying by range base loop
    counter = 1;
    for(int mark : marks)
    {
        cout<<"Student "<<counter<<" Marks:   "<<mark<<endl;
        counter++;
    }


    //Adding 3 more students marks Manually.
    marks.push_back(12);
    marks.push_back(15);
    marks.push_back(18);

    // Removing the last index.

    marks.pop_back();

    
    int highest = marks[0];
    int lowest = marks[0];

    int size = marks.size();

    for(int i = 0; i < size; i++)
    {
        if(marks[i] > highest){
            highest = marks[i];
        }
        if(marks[i] < lowest){
            lowest = marks[i];
        }
    }



    cout<<"First Element        :"<<marks.front()<<endl;
    cout<<"Last Element         :"<<marks.back()<<endl;
    cout<<"Size of Vector       :"<<size<<endl;
    cout<<"Capacity of Vector   :"<<marks.capacity()<<endl;
    cout<<"Highest Element      :"<<highest<<endl;
    cout<<"Lowest Element       :"<<lowest<<endl;




    return 0;
}
