#include <iostream>
using namespace std;

int main() {
    double celcius, fahrenheit, reamur, kelvin;
    
    cout << "\tPROGRAM KONVERSI SUHU" << endl;
    cout << "\nMasukan Suhu(Celcius) = ";
    cin >> celcius;

    fahrenheit = (celcius * 9 / 5) + 32;
    reamur = celcius * 4 / 5;
    kelvin = celcius + 273.15;

    cout << "Jadi,\t" << celcius << " derajat celcius\t\t= " << fahrenheit << " derajat fahrenheit" << endl;
    cout << "\t" << fahrenheit << " derajat fahrenheit\t\t= " << reamur << " derajat reamur" << endl;
    cout << "\t" << reamur << " derajat reamur\t\t= " << kelvin << " derajat kelvin" << endl;
    
    return 0;
}
