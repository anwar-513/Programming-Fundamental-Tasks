#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int radius = 4;           
    float pi = acos(-1);  
    float volume = (4.0 / 3.0) * pi * pow(radius, 3);
    float surfaceArea = 4 * pi * pow(radius, 2);

    cout << "The volume of the sphere is = " << volume << endl;
    cout << "The surface area of the sphere is = " << surfaceArea << endl;

    return 0;
}

