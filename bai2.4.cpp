#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap hai so nguyen a va b (b != 0): ";
    cin >> a >> b;

    int chiaNguyen = a / b;
    double chiaThapPhan = static_cast<double>(a) / b;

    cout << "Chia lay phan nguyen (a / b): " << chiaNguyen << endl;
    cout << "Chia thap phan ((double)a / b): " << chiaThapPhan << endl;

    return 0;
}