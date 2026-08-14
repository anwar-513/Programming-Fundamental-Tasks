#include <iostream>
#include <string>

using namespace std;

// Function to check if a character is alphanumeric manually
bool isAlphaNumeric(char c) {
    return (c >= 'a' && c <= 'z') || 
           (c >= 'A' && c <= 'Z') || 
           (c >= '0' && c <= '9');
}

char toLower(char character) {
    if (character >= 'A' && character <= 'Z') {
        return character + 32; 
    }
    return character;
}

int main() {
    string text = "A man, a plan, a canal: Panama";
    
    int left = 0;
    int right = text.length() - 1;
    bool isPalindrome = true;

    while (left < right) {
        while (left < right && !isAlphaNumeric(text[left])) {
            left++;
        }
        while (left < right && !isAlphaNumeric(text[right])) {
            right--;
        }

        if (toLower(text[left]) != toLower(text[right])) {
            isPalindrome = false;
            break; 
        }

        left++;
        right--;
    }

    cout<<"Entered Text---> "<<text<<endl;
    if (isPalindrome) 
	{
        cout<<"Result: Valid Palindrome"<<endl;
    }
	else 
	{
        cout<<"Result: Not a Palindrome"<<endl;
    }

    return 0;
}
