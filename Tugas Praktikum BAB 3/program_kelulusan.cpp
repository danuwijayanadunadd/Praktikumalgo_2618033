#include <iostream>
using namespace std;

int main() {
    int nilai_pertama, nilai_kedua;
    
    cout << "Masukkan nilai pertama: ";
    cin >> nilai_pertama;
    
    cout << "Masukkan nilai kedua  : ";
    cin >> nilai_kedua;
    
    int kondisi1 = (nilai_pertama > 60);
    int int_kondisi2 = (nilai_kedua > 60);
    
    int status_lulus = kondisi1 & int_kondisi2;
    
    if (status_lulus == 1) {
        cout << "Selamat, Anda LULUS!" << endl;
    } else {
        cout << "Maaf, Anda TIDAK LULUS!" << endl;
    }
    
    return 0;
}
