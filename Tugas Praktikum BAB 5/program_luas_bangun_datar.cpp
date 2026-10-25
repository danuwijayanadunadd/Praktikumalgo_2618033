#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nim;
    int pilihan;
    double sisi, panjang, lebar, alas, tinggi;

    cout << "Masukkan Nama : ";
    getline(cin, nama);
    cout << "Masukkan NIM : ";
    getline(cin, nim);

    cout << endl;
    cout << "=== MENGHITUNG LUAS BANGUN DATAR ==="
         << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Pilih bangun datar: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan sisi : ";
            cin >> sisi;
            cout << "Luas persegi = "
                 << sisi * sisi << endl;
            break;
        case 2:
            cout << "Masukkan panjang : ";
            cin >> panjang;
            cout << "Masukkan lebar : ";
            cin >> lebar;
            cout << "Luas persegi panjang = "
                 << panjang * lebar << endl;
            break;
        case 3:
            cout << "Masukkan alas : ";
            cin >> alas;
            cout << "Masukkan tinggi : ";
            cin >> tinggi;
            cout << "Luas segitiga = "
                 << 0.5 * alas * tinggi << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl;
    }
    return 0;
}
