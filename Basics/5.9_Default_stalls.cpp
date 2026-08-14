#include<iostream>
#include <vector>
using namespace std;

vector<string stallList>;
	
 void loadDefaultStalls() {
        stallList.push_back(new Stall(nextStallID++, "Gate A - North Entrance",   "Food",        "Large" ));
        stallList.push_back(new Stall(nextStallID++, "Gate B - South Entrance",   "Crafts",      "Medium"));
        stallList.push_back(new Stall(nextStallID++, "Central Square Plot 1",     "Any",         "Large" ));
        stallList.push_back(new Stall(nextStallID++, "Central Square Plot 2",     "Clothing",    "Medium"));
        stallList.push_back(new Stall(nextStallID++, "Riverside Corner East",     "Food",        "Small" ));
        stallList.push_back(new Stall(nextStallID++, "Riverside Corner West",     "Electronics", "Medium"));
        stallList.push_back(new Stall(nextStallID++, "Market Street Block 1",     "Any",         "Large" ));
        stallList.push_back(new Stall(nextStallID++, "Market Street Block 2",     "Crafts",      "Small" ));
        stallList.push_back(new Stall(nextStallID++, "Old Town Alley Spot A",     "Food",        "Small" ));
        stallList.push_back(new Stall(nextStallID++, "Old Town Alley Spot B",     "Clothing",    "Small" ));
        stallList.push_back(new Stall(nextStallID++, "Park Lane Stall 1",         "Any",         "Medium"));
        stallList.push_back(new Stall(nextStallID++, "Park Lane Stall 2",         "Food",        "Large" ));
        stallList.push_back(new Stall(nextStallID++, "Hilltop Bazaar Corner",     "Crafts",      "Large" ));
        stallList.push_back(new Stall(nextStallID++, "Hilltop Bazaar Center",     "Electronics", "Large" ));
        stallList.push_back(new Stall(nextStallID++, "Sunset Boulevard Row 1",    "Clothing",    "Medium"));
        stallList.push_back(new Stall(nextStallID++, "Sunset Boulevard Row 2",    "Any",         "Small" ));
        stallList.push_back(new Stall(nextStallID++, "Town Hall Front Plaza",     "Food",        "Large" ));
        stallList.push_back(new Stall(nextStallID++, "Town Hall Side Alley",      "Crafts",      "Small" ));
        stallList.push_back(new Stall(nextStallID++, "Harbor View Dock Stall",    "Any",         "Medium"));
        stallList.push_back(new Stall(nextStallID++, "Harbor View Pier Corner",   "Electronics", "Small" ));
    }


int main()
{

	
	for(int i = 0; i < stallList.size(); i++)
	{
		cout<<vector(i)<<endl;
	}
    
    return 0;
}
