#include <iostream>
using namespace std;

int main() {
    int n, i;
    long faktorial = 1;

    cout << "## 2618033 - Danu Wijaya ##" << endl;
    cout << "=================================" << endl;
    cout << "## Program C++ Hitung Faktorial ##" << endl;
    cout << "=================================" << endl;
    cout << endl;
    cout << "Input angka: ";
    cin >> n;

    if (n < 0 || n > 12) {
        cout << "Masukkan angka 0 sampai 12" << endl;
        return 0;
    }

    cout << n << "! = ";
    for (i = 1; i <= n; i++) {
        faktorial *= i;
        cout << i;
        if (i < n) {
            cout << " * ";
        }
    }
    if (n >= 1) {
        cout << " = ";
    }
    cout << faktorial << endl;
    return 0;
}
