#include <iostream>
#include <iomanip>
using namespace std;
const double MUC_GIAM_TRU = 11000000.0;
const double THUE_SUAT = 0.10;
int main() {
    double thuNhap;
    cout << "Nhap thu nhap hang thang (VND): ";
    cin >> thuNhap;

    double thuNhapTinhThue = thuNhap - MUC_GIAM_TRU;
    double thuePhaiNop = 0.0;

    if (thuNhapTinhThue > 0) {
        thuePhaiNop = thuNhapTinhThue * THUE_SUAT;
    }

    cout << fixed << setprecision(0);
    cout << "Thue TNCN phai dong: " << thuePhaiNop << " VND" << endl;
    return 0;
}