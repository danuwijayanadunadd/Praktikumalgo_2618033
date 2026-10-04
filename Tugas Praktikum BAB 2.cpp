#include <iostream>
using namespace std;

int main() {
    string nama, kelas;
    int nim, semester, ipk;

    cout << "PRAKTIKUM ALGORITMA 2025";
    cout << "\n------------------------";

    cout << "\nMasukan Nama    : ";
    getline(cin, nama);
    cout << "Masukan NIM     : ";
    cin >> nim;
    cout << "Masukan Kelas   : ";
    cin >> kelas;
    cout << "Masukan Semester: ";
    cin >> semester;
    cout << "Masukan IPK     : ";
    cin >> ipk;
    cout << endl;

    cout << "\nBIODATA MAHASISWA";
    cout << "\n=================";
    cout << "\nNama     : " << nama;
    cout << "\nNIM      : " << nim;
    cout << "\nKelas    : " << kelas;
    cout << "\nSemester : " << semester;
    cout << "\nIPK      : " << ipk;
    
    cin.ignore();
    cin.get(); 

    return 0;
}