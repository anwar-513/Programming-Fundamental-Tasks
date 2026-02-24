#include<iostream>
using namespace std;


void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);
void pattern5(int n);
void pattern6(int n);
void pattern7(int n);
void pattern8(int n);
void pattern9(int n);
void pattern10(int n);
void pattern11(int n);
void pattern12(int n);
void pattern13(int n);
void pattern14(int n);
void pattern15(int n);
void pattern16(int n);
void pattern17(int n);
void pattern18(int n);
void pattern19(int n);
void pattern20(int n);
void pattern21(int n);
void pattern22(int n);

int main()
{	
	int number;
	
 	cout<<"Enter the number of entry of pattern---> ";
	cin>>number;

//   cout<<"\n~~~Pattern 1~~~"<<endl;
//	pattern1(number);
//    cout<<"\n~~~Pattern 2~~~"<<endl;
//	pattern2(number);
//    cout<<"\n~~~Pattern 3~~~"<<endl;
//	pattern3(number);
//    cout<<"\n~~~Pattern 4~~~"<<endl;
//	pattern4(number);
//    cout<<"\n~~~Pattern 5~~~"<<endl;
//	pattern5(number);
//    cout<<"\n~~~Pattern 6~~~"<<endl;
//	pattern6(number);
//    cout<<"\n~~~Pattern 7~~~"<<endl;
//	pattern7(number);
//    cout<<"\n~~~Pattern 8~~~"<<endl;
//	pattern8(number);
//    cout<<"\n~~~Pattern 9~~~"<<endl;
//	pattern9(number);
//    cout<<"\n~~~Pattern 10~~~"<<endl;
//	pattern10(number);
//   cout<<"\n~~~Pattern 11~~~"<<endl;
//	pattern11(number);
//     cout<<"\n~~~Pattern 12~~~"<<endl;
//	pattern12(number);
//    	cout<<"\n~~~Pattern 13~~~"<<endl;
//	pattern13(number);
//  	cout<<"\n~~~Pattern 14~~~"<<endl;
//	pattern14(number);
//    cout<<"\n~~~Pattern 15~~~"<<endl;
//	pattern15(number);
      cout<<"\n~~~Pattern 16~~~"<<endl;
	pattern16(number);
//    cout<<"\n~~~Pattern 17~~~"<<endl;
//	pattern17(number);
//    cout<<"\n~~~Pattern 18~~~"<<endl;
//	pattern18(number);
//    cout<<"\n~~~Pattern 19~~~"<<endl;
//	pattern19(number);	
//    cout<<"\n~~~Pattern 20~~~"<<endl;
//	pattern20(number);
//    cout<<"\n~~~Pattern 21~~~"<<endl;
//	pattern21(number);
//    cout<<"\n~~~Pattern 22~~~"<<endl;
//	pattern22(number);

	
	
	return 0;
}


void pattern1(int n)
{
	for(int i = 0; i < n; i++)							// * * * * 
	{													// * * * *
		for(int j = 0; j < n; j++)						// * * * *
		{												// * * * *
			cout<<"* ";
		}
		cout<<endl;
	}
}

void pattern2(int n)
{
	for(int i = 0; i < n; i++)					// *
	{											// * *
		for(int j = 0; j <= i; j++)				// * * *
		{										// * * * * 
			cout<<"* ";
		}
		cout<<endl;
	}
}

void pattern3(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = n; j > i; j--)			// * * * *
		{									// * * * 
			cout<<"* ";						// * *
		}									// *
		cout<<endl;
	}
}
void pattern4(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = n-1; j > i; j--)		// 		 *
		{									//     * *
			cout<<"  ";						//   * * *
		}									// * * * * 
		for(int k = 0; k <=i; k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}

void pattern5(int n)
{
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < i; j++)			// * * * * 
		{									//   * * *
			cout<<"  ";						//     * * 
		}									//       *
		for(int k = 0; k < n-i; k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}

void pattern6(int n)
{
	for(int i = 0; i < n; i++)						// 1 2 3 4
	{												// 1 2 3 4
		for(int j = 1; j <= n; j++)					// 1 2 3 4
		{											// 1 2 3 4 
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void pattern7(int n)
{
	for(int i = 0; i < n; i++)
	{											// 1
		for(int j = 0; j <= i; j++)				// 1 2
		{										// 1 2 3
			cout<<j+1<<" ";						// 1 2 3 4
		}
		cout<<endl;
	}
}

void pattern8(int n)
{
	for(int i = 0; i < n; i++)				// 1 2 3 4
	{										// 1 2 3
		for(int j = 0; j < n-i; j++)		// 1 2 
		{									// 1
			cout<<j+1<<" ";
		}
		cout<<endl;
	}
}

void pattern9(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n-i-1; j++)
		{
			cout<<" ";							//    *
		}										//   ***
		for(int k = 0; k <= i; k++)				//  *****
		{										// *******
			cout<<"*";
		}
		for(int h = 0; h < i; h++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

void pattern10(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int h = 0; h < i; h++)
		{
			cout<<" ";
		}												// *******
		for(int j = 0; j <= n-i-1 ; j++)				//  *****
		{												//   ***
			cout<<"*";									//    *
		}
		for(int k = 0; k < n-i-1; k++)
		{
			cout<<"*";
		}

		cout<<endl;
	}
}

void pattern11(int n)
{
	pattern9(n);             // maxture of 9 and 10
	pattern10(n);         
}

void pattern12(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)				// *
		{										// * *
			cout<<"* ";							// * * *
		}										// * * * *
		cout<<endl;								// * * *
	}											// * *
	for(int i = 0; i < n; i++)					// *
	{
		for(int j = 0; j < n-i-1; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}

void pattern13(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			cout<<"*";
		}
		for(int k =  (n*2)-i-3; k >= i; k--)
		{
			cout<<" ";
		}
		for(int h = 0; h <= i; h++) 		// *      *
		{									// **    **
		cout<<"*";							// ***  ***
	    }									// ********
		cout<<endl;							// ***  ***
	}										// **    **
											// *      *
	for(int i = 0; i < n; i++)
	{
		for(int j = n-1; j > i; j--)
		{
			cout<<"*";
		}
		for(int k = 0; k <= i; k++)
		{
			cout<<"  ";
		}
		for(int h = n-1; h > i; h--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

void pattern14(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = n; j > i; j--)							// **********
		{													// ****  ****
			cout<<"*";										// ***    ***
		}													// **      **
		for(int k = 0; k < i; k++)							// *        *
		{													// *        *
			cout<<"  ";										// **      **
		}													// ***    ***
		for(int h = n; h > i; h--)							// ****  ****
		{													// **********
			cout<<"*";
		}
		cout<<endl;
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			cout<<"*";
		}
		for(int k = 0; k < n-i-1; k++)
		{
			cout<<"  "; 
		}
		for(int h = 0; h <= i; h++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
}

void pattern15(int n)
{
	for(int i = 0; i < n; i++)
	{
			cout<<"* ";		
	} 
	cout<<endl;												// * * * *
	for(int i = 0; i < n-2; i++)							// *     * 
	{														// *     *
		cout<<"* ";											// * * * *
		for(int j = 0; j < n-2; j++)
		cout<<"  ";
		cout<<"*";
		cout<<endl;
	}
	
	for(int i = 0; i < n; i++)
	{
		cout<<"* ";
	}
}

void pattern16(int n)
{	
	for(int i = 0; i < n; i++)
	{
		int number = 1;
		for(int j = 0; j <= i; j++)
		{
			if(i % 2 == 0)
			{
			number -= number;
			cout<<number<<" ";
			}
			else if(i % 2 != 0)
			{
				cout<<number<<" ";
			}
		}
		cout<<endl;	
	}
}

