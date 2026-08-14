#include<iostream>
using namespace std;

char Conversion(char ch)
{
	for(int i = 65; i <= 90; i++)
	{
		if(i == ch)
		{
			return ch + 32;
		}
	}
	
	for(int i = 97; i <= 122; i++)
	{
		if(i == ch)
		{
			return ch - 32;
		}
	}
}



int main()
{
	char ch;
	
	cout<<"Enter character---> ";
	cin>>ch;
	
	while(ch < 65 || ch > 90 && ch < 97 || ch > 122)
	{
		cout<<"Invalid Character entered!!..";
		cout<<"\n Enter alphabit---> ";
		cin>>ch;
	}

		cout<<"before----> "<<ch<<"\n";
		cout<<"After----->"<<Conversion(ch);

	return 0;
}
