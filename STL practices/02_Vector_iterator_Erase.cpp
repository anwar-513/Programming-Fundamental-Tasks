/* Problem
Given:
10 15 20 25 30 35 40
Remove all even numbers from the vector using iterators.
Expected:
15 25 35
Don't use a second vector.
STL: vector, iterators, erase()
*/


#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> numbers;

    numbers = {10, 15, 20, 25, 30, 35, 40};

    
    for(vector<int>::iterator it = numbers.begin(); it != numbers.end(); ){
        if(*it % 2 == 0)
        {
            it = numbers.erase(it);
        }
        else
        {
            ++it;
        }
    }

    for(vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        cout<<*it<<"  ";
    }
    

    return 0;
}