/*  PROBLEM
Create:
vector<pair<string, int>>
Add products using both:
push_back()
and
emplace_back()
For example:
Laptop 120000
Mouse 2500
Keyboard 5000
Your task is simply to implement the same inventory twice:
 once using push_back
 once using emplace_back
Then explain in comments what difference you observe in how the object/pair is constructed
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<pair<string, int>> inventory_push_back;
    vector<pair<string, int>> inventory_emplace_back;

    inventory_push_back.push_back({"Labtop", 2000});
    inventory_push_back.push_back({"Mouse", 1000});
    inventory_push_back.push_back({"Pods", 2000});

    cout<<"Product\t\tStore_________by push_bach()"<<endl;
    for(const pair<string, int> &iinventory : inventory_push_back)
    {
        cout<<iinventory.first<<"\t\t"<<iinventory.second<<endl;
    }

    inventory_emplace_back.emplace_back("Speakers", 250);
    inventory_emplace_back.emplace_back("Keyboard", 650);
    inventory_emplace_back.emplace_back("Chargers", 350);

    
    cout<<"Product\t\tStore_________by emplace_back()"<<endl;
    for(const pair<string, int> &iinventory : inventory_emplace_back)
    {
        cout<<iinventory.first<<"\t\t"<<iinventory.second<<endl;
    }

    return 0;
}

/*
for push_back we have to create the pair first by using {} syntax 
and for arguments than we can put it into vector **while** the emplace_back() 
automatically give the pair constructor argument to the vector. 
*/