#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double GIA_BAC_1 = 1806.0;
    const double GIA_BAC_2 = 1866.0;
    const double GIA_BAC_3 = 2167.0;

    double soKwh;
    cout << "Nhap so dien tieu thu (kWh): ";
    cin >> soKwh;

    double tongTien = 0.0;

    if (soKwh <= 50) {
        tongTien = soKwh * GIA_BAC_1;
    } else if (soKwh <= 100) {
        tongTien = 50 * GIA_BAC_1 + (soKwh - 50) * GIA_BAC_2;
    } else {
        tongTien = 50 * GIA_BAC_1 + 50 * GIA_BAC_2 + (soKwh - 100) * GIA_BAC_3;
    }

    cout << fixed << setprecision(0);
    cout << "Tong tien dien phai tra: " << tongTien << " VND" << endl;
    return 0;
}