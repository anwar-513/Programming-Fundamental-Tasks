/*      PROBLEM
Represent every student as:
pair<string, int>
Example:
Ali 85
Ahmed 72
Usman 91
Hamza 67
Store them in:
vector<pair<string, int>>
Then:
 Add students.
 Print all students.
 Find the student with highest marks.
 Find a student by name.
 Update a student's marks.
*/

#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    vector<pair<string, int>> students;

    int iStudents = 0;
    cout << "Enter the number of students ---> ";
    cin >> iStudents;

    for (int i = 0; i < iStudents; i++)
    {
        string name;
        int marks = 0;

        cout << "Enter the name of student " << i + 1 << " ---> ";
        cin >> name;
        cout << "Enter the marks of " << name << " ---> ";
        cin >> marks;

        students.push_back({name, marks});
    }

    cout << "\nStudent\tMarks" << endl;
    for (const pair<string, int> &student : students)
    {
        cout << student.first << "\t" << student.second << endl;
    }

    auto highestStudent = max_element(students.begin(), students.end(),
        [](const pair<string, int> &a, const pair<string, int> &b)
        {
            return a.second < b.second;
        });

    cout << "\nStudent with highest marks: " << highestStudent->first
         << " -> " << highestStudent->second << endl;

    string searchName;
    cout << "\nEnter the name to search ---> ";
    cin >> searchName;

    bool found = false;
    for (const pair<string, int> &student : students)
    {
        if (student.first == searchName)
        {
            cout << "Student found: " << student.first << " has " << student.second << " marks." << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student not found." << endl;
    }

    string updateName;
    cout << "\nEnter the name whose marks you want to update---> ";
    cin >> updateName;

    found = false;
    for (pair<string, int> &student : students)
    {
        if (student.first == updateName)
        {
            cout << "Enter the new marks for " << student.first << "---> ";
            cin >> student.second;
            cout << "Marks updated successfully." << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student not found." << endl;
    }

    cout << "\nUpdated student list:" << endl;
    cout << "Student\tMarks" << endl;
    for (const pair<string, int> &student : students)
    {
        cout << student.first << "\t" << student.second << endl;
    }

    return 0;
}