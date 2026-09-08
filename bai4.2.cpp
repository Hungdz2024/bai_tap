#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Nhap 2 so thuc x va y: ";
    cin >> x >> y;

    cout << boolalpha; 
    cout << "x == y : " << (x == y) << endl;
    cout << "x != y : " << (x != y) << endl;
    cout << "x > y  : " << (x > y)  << endl;
    cout << "x < y  : " << (x < y)  << endl;
    cout << "x >= y : " << (x >= y) << endl;
    cout << "x <= y : " << (x <= y) << endl;

    return 0;
}