#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double HE_SO_NHAN = 9.0 / 5.0; 
    const double DO_LECH = 32.0;

    double doC;
    cout << "Nhap nhiet do (do C): ";
    cin >> doC;

    double doF = doC * HE_SO_NHAN + DO_LECH;

    cout << fixed << setprecision(2);
    cout << doC << " do C = " << doF << " do F" << endl;
    return 0;
}