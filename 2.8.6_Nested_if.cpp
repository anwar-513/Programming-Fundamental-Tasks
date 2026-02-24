#include<iostream>
using namespace std;

int main()
{  
    int temperature;
    
    cout<<"Enter the number---> ";
    cin>>temperature;

   if(temperature > 0)
   {
        if(temperature > 15)
         {
            if(temperature > 30)
            {
                cout<<"hot.";
            }
            else
            {
                cout<<"moderate.";
            }
         }
        else
        {
            cout<<"cold.";
        }
   }
   else
   {
        cout<<"Freezing.";
   }

    return 0;
}