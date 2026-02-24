#include <iostream>
using namespace std;

void selectionSort(int &a, int &b, int &c, int &d, int &e) {

    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (a > d) swap(a, d);
    if (a > e) swap(a, e);

    if (b > c) swap(b, c);
    if (b > d) swap(b, d);
    if (b > e) swap(b, e);

    if (c > d) swap(c, d);
    if (c > e) swap(c, e);

    if (d > e) swap(d, e);
}

int main() {
    int a, b, c, d, e;

    cout << "Enter 5 numbers: ";
    cin >> a >> b >> c >> d >> e;

    selectionSort(a, b, c, d, e);

    cout << "Sorted numbers (Selection Sort): "
         << a << " " << b << " " << c << " " << d << " " << e;

    return 0;
}
