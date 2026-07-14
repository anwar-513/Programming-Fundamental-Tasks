#include <iostream>
using namespace std;

int main()
{
    int rows, coloms;

    cout<<"Enter number of rows---> ";
    cin>>rows;
    coloms = rows;
    
    int array[rows][coloms] = {0};

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloms; j++)
        {
            
            cout<<"Enter the matrix elements-->";
            cin>>array[i][j];
        }
    }

    cout<<"The given matrix:"<<endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0 ; j < coloms; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = coloms - 1;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout<<array[top][i]<<" ";
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout<<array[i][right]<<" ";
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout<<array[bottom][i]<<" ";
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout<<array[i][left]<<" ";
            }
            left++;
        }
    }

    return 0;
}