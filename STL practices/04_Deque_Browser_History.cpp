/*                                  PROBLEM
Create a browser-history system using:
deque<string>
Operations:
1. Visit new website
2. Go back
3. Go forward
4. Show current history
Your program should demonstrate inserting/removing from both ends.
STL: deque, push_front, push_back, pop_front, pop_back
*/

#include<iostream>
#include<deque>
#include<string>
using namespace std;


int main()
{
    deque<string> backStack;      // Sites visited, oldest at front, current at back
    deque<string> forwardStack;   // Sites available to redo, front = next to restore


    // 1. Visit new websites
    backStack.push_back("Google");
    backStack.push_back("YouTube");
    backStack.push_back("GitHub");
    backStack.push_back("LeetCode");

    cout<<"__________History after visiting sites________"<<endl;
    for(deque<string>::iterator it = backStack.begin(); it != backStack.end(); it++)
    {
        cout<<*it<<",  ";
    }
    cout<<endl;
    cout<<"Current Site: "<<backStack.back()<<endl;


    // 2. Go back (from LeetCode)
    string current = backStack.back();
    backStack.pop_back();
    forwardStack.push_front(current);

    cout<<"__________After Going Back________"<<endl;
    cout<<"Current Site: "<<backStack.back()<<endl;


    // 2. Go back again (from GitHub)
    current = backStack.back();
    backStack.pop_back();
    forwardStack.push_front(current);

    cout<<"__________After Going Back Again________"<<endl;
    cout<<"Current Site: "<<backStack.back()<<endl;


    // 3. Go forward (redo GitHub)
    if(!forwardStack.empty())
    {
        string redoSite = forwardStack.front();
        forwardStack.pop_front();
        backStack.push_back(redoSite);
    }

    cout<<"__________After Going Forward________"<<endl;
    cout<<"Current Site: "<<backStack.back()<<endl;


    // 1. Visit a new website after going back/forward (should clear forwardStack)
    backStack.push_back("StackOverflow");
    forwardStack.clear();

    cout<<"__________After Visiting a New Site________"<<endl;
    cout<<"Current Site: "<<backStack.back()<<endl;


    // 4. Show current history
    cout<<"__________FINAL BROWSER HISTORY_____________"<<endl;
    for(deque<string>::iterator it = backStack.begin(); it != backStack.end(); it++)
    {
        cout<<*it<<",  ";
    }
    cout<<endl;


    return 0;
}