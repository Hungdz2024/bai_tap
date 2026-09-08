#include <iostream>
using namespace std;

int main() {
    long long soTien;
    cout << "Nhap so tien can doi (VND): ";
    cin >> soTien;

    cout << "So to quy doi toi uu:" << endl;

    int to500k = soTien / 500000; soTien %= 500000;
    int to200k = soTien / 200000; soTien %= 200000;
    int to100k = soTien / 100000; soTien %= 100000;
    int to50k  = soTien / 50000;  soTien %= 50000;
    int to20k  = soTien / 20000;  soTien %= 20000;
    int to10k  = soTien / 10000;  soTien %= 10000;
    int to5k   = soTien / 5000;   soTien %= 5000;
    int to2k   = soTien / 2000;   soTien %= 2000;
    int to1k   = soTien / 1000;   soTien %= 1000;

    if (to500k > 0) cout << "- 500.000d : " << to500k << " to" << endl;
    if (to200k > 0) cout << "- 200.000d : " << to200k << " to" << endl;
    if (to100k > 0) cout << "- 100.000d : " << to100k << " to" << endl;
    if (to50k  > 0) cout << "-  50.000d : " << to50k  << " to" << endl;
    if (to20k  > 0) cout << "-  20.000d : " << to20k  << " to" << endl;
    if (to10k  > 0) cout << "-  10.000d : " << to10k  << " to" << endl;
    if (to5k   > 0) cout << "-   5.000d : " << to5k   << " to" << endl;
    if (to2k   > 0) cout << "-   2.000d : " << to2k   << " to" << endl;
    if (to1k   > 0) cout << "-   1.000d : " << to1k   << " to" << endl;
    if (soTien > 0) cout << "- So du le khong the doi: " << soTien << " VND" << endl;

    return 0;
}