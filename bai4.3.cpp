#include <iostream>
using namespace std;

int main() {
    int tuoi;
    cout << "Nhap do tuoi: ";
    cin >> tuoi;

    bool laiXeMayDuoi50cc = (tuoi >= 16) && (tuoi < 18);
    bool laiOTo = (tuoi >= 18);

    cout << boolalpha;
    cout << "Du dieu kien lai xe duoi 50cc (16-17 tuoi): " << laiXeMayDuoi50cc << endl;
    cout << "Du dieu kien lai o to (>= 18 tuoi)           : " << laiOTo << endl;

    return 0;
}