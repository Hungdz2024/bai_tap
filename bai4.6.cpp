#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    int kq = a++ + ++b - b-- + --a;

    cout << "Ket qua kq = " << kq << endl;
    cout << "Gia tri a cuoi cung: " << a << endl;
    cout << "Gia tri b cuoi cung: " << b << endl;
    return 0;
}