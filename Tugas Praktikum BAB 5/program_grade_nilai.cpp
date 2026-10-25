#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nim;
    int nilai;

    cout << "Nama : ";
	getline (cin, nama);
    cout << "NIM : ";
    cin >> nim;
    cout << "Masukkan nilai (0-100): ";
    cin >> nilai;

    if (nilai < 0 || nilai > 100) {
        cout << "Nilai tidak valid";
    } else {
        switch (nilai / 10) {
            case 10:
            case 9:
                cout << "Grade A" << endl;
                break;
            case 8:
                cout << "Grade B" << endl;
                break;
            case 7:
                cout << "Grade C" << endl;
                break;
            case 6:
                cout << "Grade D" << endl;
                break;
            default:
                cout << "Grade E" << endl;
        }
    }
    return 0;
}
