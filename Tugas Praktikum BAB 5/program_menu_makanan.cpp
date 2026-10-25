#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, menu;
    int pilihan, jumlah, harga = 0;
    int total, diskon = 0, bayar;

    cout << "Masukkan Nama Pemesan: ";
    getline(cin, nama);

    cout << endl;
    cout << "=== MENU KANTIN ===" << endl;
    cout << "1. Nasi Goreng - Rp15000" << endl;
    cout << "2. Mie Goreng  - Rp12000" << endl;
    cout << "3. Bakso       - Rp10000" << endl;
    cout << "4. Es Teh      - Rp5000" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            menu = "Nasi Goreng";
            harga = 15000;
            break;
        case 2:
            menu = "Mie Goreng";
            harga = 12000;
            break;
        case 3:
            menu = "Bakso";
            harga = 10000;
            break;
        case 4:
            menu = "Es Teh";
            harga = 5000;
            break;
        default:
            cout << "Menu tidak tersedia" << endl;
            return 0;
    }

    cout << "Masukkan jumlah pesanan: ";
    cin >> jumlah;

    total = harga * jumlah;
    if (total > 40000) {
        diskon = total * 8 / 100;
    }
    bayar = total - diskon;

    cout << endl;
    cout << "===== STRUK PEMBAYARAN =====" << endl;
    cout << "Nama Pemesan     : " << nama << endl;
    cout << "Menu             : " << menu << endl;
    cout << "Harga Satuan     : Rp" << harga << endl;
    cout << "Jumlah Pesanan   : " << jumlah << endl;
    cout << "Total Pesanan    : Rp" << total << endl;
    cout << "Diskon 8%        : Rp" << diskon << endl;
    cout << "Total Pembayaran : Rp" << bayar << endl;
    cout << "Terima kasih telah memesan!" << endl;
    return 0;
}
