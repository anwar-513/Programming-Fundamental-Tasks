/*                                  PROBLEM
Represent train coaches using:
list<string>
Start with:
A B C D E
Perform:
1. Add coach X at the beginning.
2. Add coach Y at the end.
3. Find coach C.
4. Insert Z before C.
5. Remove coach D.
6. Print the final train.
Important: Use an iterator to locate C.
This gives you an actual reason to use list instead of vector.
*/

#include<iostream>
#include<list>
#include<string>
using namespace std;


int main()
{
    list<string> coaches;

    coaches = {"A", "B", "C", "D", "E"};

    cout<<"_________List Before________"<<endl;
    for(list<string>::iterator it = coaches.begin(); it != coaches.end(); it++)
    {
        cout<<*it<<",  ";
    }
    cout<<endl;


    // 1. Add coach X at the beginning.
    coaches.push_front("X");

    // 2. Add coach Y at the end.
    coaches.push_back("Y");

    cout<<"__________List After adding X and Y________"<<endl;
    for(list<string>::iterator it = coaches.begin(); it != coaches.end(); it++)
    {
        cout<<*it<<",  ";
    }
    cout<<endl;


    // 3. Find coach C using an iterator.
    list<string>::iterator itC = coaches.begin();

    while(itC != coaches.end())
    {
        if(*itC == "C")
        {
            cout<<"Coach C found!"<<endl;
            break;
        }
        itC++;
    }

    // 4. Insert Z before C.
    coaches.insert(itC, "Z");


    // 5. Remove coach D using an iterator.
    list<string>::iterator itD = coaches.begin();

    while(itD != coaches.end())
    {
        if(*itD == "D")
        {
            itD = coaches.erase(itD);
            break;
        }
        itD++;
    }


    // 6. Print the final train.
    cout<<"__________FINAL TRAIN COACHES_____________"<<endl;
    for(list<string>::iterator it = coaches.begin(); it != coaches.end(); it++)
    {
        cout<<*it<<", ";
    }

    return 0;
}