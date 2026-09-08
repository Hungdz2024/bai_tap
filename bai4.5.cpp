#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Nhap 3 canh cua tam giac: ";
    cin >> a >> b >> c;
    bool laTamGiac = (a > 0) && (b > 0) && (c > 0) && 
                     (a + b > c) && (a + c > b) && (b + c > a);
    if (!laTamGiac) {
        cout << "Ba canh khong tao thanh mot tam giac hop le." << endl;
    } else {
        cout << "Day la tam giac hop le!" << endl;
        bool deu = (a == b) && (b == c);
        bool can = (a == b) || (b == c) || (a == c);
        bool vuong = (a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a);

        if (deu) {
            cout << "Phan loai: Tam giac deu." << endl;
        } else if (can && vuong) {
            cout << "Phan loai: Tam giac vuong can." << endl;
        } else if (can) {
            cout << "Phan loai: Tam giac can." << endl;
        } else if (vuong) {
            cout << "Phan loai: Tam giac vuong." << endl;
        } else {
            cout << "Phan loai: Tam giac thuong." << endl;
        }
    }

    return 0;
}