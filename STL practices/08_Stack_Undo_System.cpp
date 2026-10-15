/*  PROBLEM
Create a simple text editor simulation.
Commands:
1. Type something
2. Undo
3. Show current text
Example:
Type: Hello
Type: World
Undo
Output:
Hello
Use:
stack<string>
Think about what should be pushed and what should be popped.
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<string> buffer;
    int command;

    while (true)
    {
        cout << "\n(1) Type\t(2) Undo\t(3) Show\t(4) Exit" << endl;
        cout << "Enter command---> ";
        cin >> command;

        // If the user types something that isn't a number, reset the input
        // so we don't get stuck in an infinite loop.
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input, please enter a number." << endl;
            continue;
        }

        if (command == 1)
        {
            string text;
            cout << "Type your text---> ";
            cin >> text;
            buffer.push(text);
        }
        else if (command == 2)
        {
            if (buffer.empty())
            {
                cout << "Nothing to undo!" << endl;
            }
            else
            {
                buffer.pop();
            }
        }
        else if (command == 3)
        {
            if (buffer.empty())
            {
                cout << "No text available." << endl;
            }
            else
            {
                cout << "Current text: " << buffer.top() << endl;
            }
        }
        else if (command == 4)
        {
            break;
        }
        else
        {
            cout << "Invalid command!!" << endl;
        }
    }

    return 0;
}