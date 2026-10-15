/*      PROBLEM
Given:
((()))
Determine whether parentheses are balanced.
Test:
((()))
()()()
(()))
((())
Use:
stack<char>
This is your first problem where the STL container actually
helps you solve an algorithmic problem.
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
    {
    int numbers;

    cout<<"Enter the number os parantheses--> ";
    cin >> numbers;

    stack<char> s;

    for (int i = 0; i < numbers; i++)
    {
        char paranthes;
        cout<<"Enter the"<<i+1<<" Paranthes---> ";
        cin >> paranthes;

        if (paranthes == '(')
        {
            s.push(paranthes);
        }
        else if (paranthes == ')')
        {
            if (s.empty())
            {
                cout << "Not Balanced";
                return 0;
            }
            s.pop();
        }
    }

    if (s.empty()) {
        cout << "Balanced";
    } else {
        cout << "Not Balanced";
    }

    return 0;
}