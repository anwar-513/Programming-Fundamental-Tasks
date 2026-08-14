#include<iostream>
using namespace std;

int fibonacci(int number)
{
	if(number <= 1)
	{
		return number;
	}
	
	return fibonacci(number-1) + fibonacci(number-2);
}

int main()
{
		int limit;
	    cout << "Enter the number of terms: ";
	    cin >> limit;
	
	    cout << "Fibonacci Series: ";
	    for (int i = 0; i < limit; i++) {
	        cout << fibonacci(i) << " ";
	    }
	    		
	return 0;
}
