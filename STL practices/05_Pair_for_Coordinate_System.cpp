/* Problem
5. Pair — Coordinate System
Store coordinates using:
pair<int, int>
Take n points from the user:
(2,3)
(5,1)
(7,8)
(1,4)
Then:
 Print all points.
 Find the point closest to the origin.
 Find the point with the largest x.
 Swap two points using swap().
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<pair<int, int>> coordinate;

    int pairs = 0;
    cout << "How many pairs---> ";
    cin >> pairs;

    for (int i = 0; i < pairs; i++)
    {
        int x = 0;
        int y = 0;
        cout << "Enter the x of coordinate " << i + 1 << " ---> ";
        cin >> x;
        cout << "Enter the y of coordinate " << i + 1 << " ---> ";
        cin >> y;

        coordinate.push_back({x, y});
    }

    cout << "\nAll points:" << endl;
    for (const pair<int, int> &pt : coordinate)
    {
        cout << "(" << pt.first << ", " << pt.second << ")" << endl;
    }

    int nearestIndex = 0;
    for (int i = 1; i < pairs; i++)
    {
        int currentDistance = coordinate[i].first * coordinate[i].first + coordinate[i].second * coordinate[i].second;
        int nearestDistance = coordinate[nearestIndex].first * coordinate[nearestIndex].first + coordinate[nearestIndex].second * coordinate[nearestIndex].second;

        if (currentDistance < nearestDistance)
            nearestIndex = i;
    }

    cout << "\nPoint closest to the origin: (" << coordinate[nearestIndex].first << ", " << coordinate[nearestIndex].second << ")" << endl;

    int largestXIndex = 0;
    for (int i = 1; i < pairs; i++)
    {
        if (coordinate[i].first > coordinate[largestXIndex].first)
            largestXIndex = i;
    }

    cout << "Point with the largest x: (" << coordinate[largestXIndex].first << ", " << coordinate[largestXIndex].second << ")" << endl;

    int firstIndex = 0;
    int secondIndex = 0;
    cout << "\nEnter first index to swap (1-based)---> ";
    cin >> firstIndex;    
    cout << "\nEnter second index to swap (1-based)---> ";
    cin>> secondIndex;

    firstIndex--;
    secondIndex--;

    if (firstIndex >= 0 && firstIndex < pairs && secondIndex >= 0 && secondIndex < pairs)
    {
        swap(coordinate[firstIndex], coordinate[secondIndex]);
        cout << "\nAfter swapping:" << endl;
        for (const pair<int, int> &pt : coordinate)
        {
            cout << "(" << pt.first << ", " << pt.second << ")" << endl;
        }
    }
    else
    {
        cout << "Invalid indices!" << endl;
    }

    return 0;
}