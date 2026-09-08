#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double PI = 3.14159265359;
    double r;

    cout << "Nhap ban kinh r: ";
    cin >> r;

    double dienTichTron = PI * r * r;
    double theTichCau = (4.0 / 3.0) * PI * r * r * r;

    cout << fixed << setprecision(2);
    cout << "Dien tich hinh tron: " << dienTichTron << endl;
    cout << "The tich hinh cau  : " << theTichCau << endl;

    return 0;
}