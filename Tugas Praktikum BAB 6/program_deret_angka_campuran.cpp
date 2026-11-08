#include <iostream>
using namespace std;

int main() {
    int n, i;

    cout << "==== 2618033 || Danu Wijaya ====" << endl;
    cout << endl;
    cout << "Masukkan jumlah angka: ";
    cin >> n;
    cout << endl;
    cout << "=== Deret Campur Logika ===" << endl;

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i * 2;
        } else if (i % 3 == 0) {
            cout << i + 3;
        } else {
            cout << i;
        }
        cout << " ";
    }
    cout << endl;
    return 0;
}
