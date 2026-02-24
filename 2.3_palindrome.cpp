#include <iostream>
using namespace std;

int main()
{
    int number;
    int original;
    int reverse = 0;
    int unit;

    cout << "Enter the number ---> ";
    cin >> number;

    original = number; 

    while (number > 0)
    {
        unit = number % 10;          
        reverse = reverse * 10 + unit; 
        number = number / 10;        
    }

    cout << "Reversed number = "<<reverse<<endl;

    if (original == reverse)
        cout << "The number is palindrome.";
    else
        cout << "The number is not a palindrome.";

    return 0;
}
