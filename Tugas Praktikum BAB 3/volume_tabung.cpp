#include <iostream>
using namespace std;

int main() {
    double jari_jari, tinggi, volume;
    const double PHI = 3.14;
    
    cout << "=== Program Menghitung Volume Tabung ===" << endl;
    cout << "Masukkan jari-jari tabung : ";
    cin >> jari_jari;
    
    cout << "Masukkan tinggi tabung    : ";
    cin >> tinggi;
    
    volume = PHI * jari_jari * jari_jari * tinggi;
    
    cout << "Volume Tabung adalah: " << (long long)volume << endl;

    return 0;
}
