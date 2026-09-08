#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float toan, ly, hoa;
    cout << "Nhap diem Toan, Ly, Hoa: ";
    cin >> toan >> ly >> hoa;

    float dtb = (toan + ly + hoa) / 3.0f;

    cout << fixed << setprecision(2);
    cout << "Diem trung binh: " << dtb << endl;

    return 0;
}