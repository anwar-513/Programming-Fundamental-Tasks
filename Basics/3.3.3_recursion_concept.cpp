#include<iostream>
using namespace std;

int sumOfDigits(int n) {
    // BASE CASE: single digit, just return it
    if (n < 10) return n;
    
    return (n % 10) + sumOfDigits(n / 10);
}

int main()
{

	cout<<sumOfDigits(8)<<endl;	
	cout<<sumOfDigits(0)<<endl;	
	cout<<sumOfDigits(1982)<<endl;	
		
	
	return 0;
}
