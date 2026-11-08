#include <iostream>
using namespace std;

int main() {
    int n, i = 1, jumlah = 0;

    cout << "## 2618033 ##" << endl;
    cout << "## Program C++ Penjumlahan Deret ##" << endl;
    cout << "=================================" << endl;
    cout << endl;
    cout << "Jumlah deret yang diinginkan: ";
    cin >> n;
    cout << endl;

    if (n < 1) {
        cout << "Jumlah deret minimal 1" << endl;
        return 0;
    }

    while (i <= n) {
        cout << i;
        if (i < n) {
            cout << " + ";
        }
        jumlah += i;
        i++;
    }
    cout << " = " << jumlah << endl;
    return 0;
}
