#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    string nim;
    
    double pendapatan = 0;
    int statusTanggungan = 0;
    double tarif = 0;
    double pajakAwal = 0;
    double pajakAkhir = 0;
    string persenTarif = "";

    cout << "===== PROGRAM PAJAK PENDAPATAN =====" << endl << endl;
    
    cout << "Nama Anda : ";
    getline(cin, nama);
    cout << "NIM Anda  : ";
    cin >> nim;
    
    cout << endl << "            DATA PENDAPATAN" << endl << endl;
    cout << "Pendapatan bulanan: Rp. ";
    cin >> pendapatan;
    
    if (pendapatan < 0) {
        cout << "Error: Input tidak valid! Pendapatan tidak boleh negatif." << endl;
        return 0; 
    }
    
    cout << "Memiliki tanggungan? (1=Ya, 0=Tidak): ";
    cin >> statusTanggungan;
    
    if (pendapatan < 5000000) {
        tarif = 0.0;
        persenTarif = "0%";
    } else if (pendapatan >= 5000000 && pendapatan < 10000000) {
        tarif = 0.05;
        persenTarif = "5%";
    } else if (pendapatan >= 10000000 && pendapatan < 20000000) {
        tarif = 0.10;
        persenTarif = "10%";
    } else {
        tarif = 0.15;
        persenTarif = "15%";
    }
    
    pajakAwal = pendapatan * tarif;
    pajakAkhir = pajakAwal;
    
    if (statusTanggungan == 1) {
        pajakAkhir = pajakAkhir - 100000;
    }
    
    if (pajakAkhir < 0) {
        pajakAkhir = 0;
    }

    cout << "Tarif pajak: " << persenTarif << endl;
    cout << "Pajak akhir: Rp" << pajakAkhir;
    
    return 0;
}
