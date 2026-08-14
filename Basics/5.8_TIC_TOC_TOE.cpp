#include<iostream>
using namespace std;





int main()
{

char board[3][3] = {
    {'X', 'O', 'X'},
    {'O', 'X', 'O'},
    {'O', 'X', 'X'}
};

// Print the board
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
        cout << board[i][j] << " ";
    cout << endl;

}

}
