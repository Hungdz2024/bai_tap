#include <iostream>
using namespace std;

int main() {
    int tuoi = 16;
    float chieuCao = 1.72f;
    char kyTuDauTen = 'N';
    bool daTotNghiep = false;

    cout << "Tuoi: " << tuoi << endl;
    cout << "Chieu cao: " << chieuCao << " m" << endl;
    cout << "Ky tu dau ten: " << kyTuDauTen << endl;
    cout << "Da tot nghiep: " << (daTotNghiep ? "Roi" : "Chua") << endl;

    return 0;
}