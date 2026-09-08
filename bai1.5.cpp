#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string maSanPham = "SP102";
    string tenSanPham = "Chuot Gaming Logitech";
    double giaTien = 450000;
    int soLuong = 3;

    double tongTien = giaTien * soLuong;

    cout << "========= HOA DON BAN HANG =========" << endl;
    cout << "Ma SP    : " << maSanPham << endl;
    cout << "Ten SP   : " << tenSanPham << endl;
    cout << "Don gia  : " << fixed << setprecision(0) << giaTien << " VND" << endl;
    cout << "So luong : " << soLuong << endl;
    cout << "------------------------------------" << endl;
    cout << "TONG TIEN: " << tongTien << " VND" << endl;
    cout << "====================================" << endl;

    return 0;
}