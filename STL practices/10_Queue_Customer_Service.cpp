/*      PROBLEM
Create a customer queue.
Operations:
1. Add customer
2. Serve customer
3. Show next customer
4. Show all waiting customers
Example:
Ali
Ahmed
Usman
Serving should happen in:
Ali → Ahmed → Usman
STL: queue
*/

#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    queue<string> customers;

    int choice;
    char again;

    while (true)
    {
        cout << "\n1. Add customer";
        cout << "\n2. Serve customer";
        cout << "\n3. Show next customer";
        cout << "\n4. Show all waiting customers";

        cout << "\nEnter your choice---> ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                string name;

                cout << "Enter customer name: ";
                cin >> name;

                customers.push(name);

                cout << "Customer added.";
                break;
            }
            case 2:
            {
                if (customers.empty())
                {
                    cout << "No customers waiting.";
                }
                else
                {
                    cout << "Serving: " << customers.front();
                    customers.pop();
                }

                break;
            }
            case 3:
            {
                if (customers.empty())
                {
                    cout << "No customers waiting.";
                }
                else
                {
                    cout << "Next customer--->" << customers.front();
                }

                break;
            }
            case 4:
            {
                if (customers.empty())
                {
                    cout << "No customers waiting.";
                }
                else
                {
                    queue<string> temp = customers;
                    cout << "____Waiting customers____\n";

                    while (!temp.empty())
                    {
                        cout << temp.front() << endl;
                        temp.pop();
                    }
                }
                break;
            }
            default:
                cout << "Invalid choice.";
        }

        cout << "\n\nDo you want to continue? (y/n)---> ";
        cin >> again;

        if (again == 'n'||again == 'N')
        {
            break;
        }
    }

    cout << "Program ended.";

    return 0;
}