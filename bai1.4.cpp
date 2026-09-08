#include <iostream>
using namespace std;
int main() {
    int a = 15, b = 27;
    cout << "Truoc khi hoan doi: a = " << a << ", b = " << b << endl;
    a = a + b; 
    b = a - b;
    a = a - b; 
    cout << "Sau khi hoan doi:   a = " << a << ", b = " << b << endl;
    return 0;
}