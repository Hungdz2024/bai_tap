#include <iostream>
using namespace std;

int main() {
    int nam;
    cout << "Nhap nam can kiem tra: ";
    cin >> nam;
    bool laNamNhuan = (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);

    if (laNamNhuan) {
        cout << nam << " la nam nhuan." << endl;
    } else {
        cout << nam << " khong phai la nam nhuan." << endl;
    }

    return 0;
}