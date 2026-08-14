#include<iostream>
using namespace std;

bool Prime(int number);

int main()
{ 
    int number;
    
    cout<<"Enter the number---> ";
    cin>>number;

	
    if(Prime(number))
        cout<<"It is prime.";
    else
        cout<<"It is not prime.";

    return 0;
}

bool Prime(int number)
{
    int factor= 0;

    for(int i = 1; i <= number; i++)
	{
		if(number % i == 0 )
		{
			factor++;
		}
	}
    return factor;
}