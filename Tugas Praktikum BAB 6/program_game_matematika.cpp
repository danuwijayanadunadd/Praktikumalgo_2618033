#include <iostream>
using namespace std;

int main() {
    int level = 1, jawaban, hasil, lanjut = 1;

    cout << "==== 2618033 || Danu Wijaya ====" << endl;
    cout << endl;
    cout << "==== PROGRAM GAME MATEMATIKA ====" << endl;

    do {
        hasil = level + (level * 5);
        cout << endl;
        cout << "Level " << level << endl;
        cout << "Berapa hasil dari " << level << " + "
             << level * 5 << " ? ";
        cin >> jawaban;

        if (jawaban == hasil) {
            cout << "Benar! Naik level!" << endl;
            level++;
        } else {
            cout << "Game Over" << endl;
            lanjut = 0;
        }
    } while (lanjut == 1 && level <= 5);

    if (lanjut == 1) {
        cout << "Selamat! Kamu menyelesaikan "
             << "semua level!" << endl;
    }
    return 0;
}