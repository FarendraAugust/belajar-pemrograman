#include <iostream>

using namespace std;

int main() {

    int x, y;
    cout << "Masukkan Nilai X=";
    cin >> x;
    cout << "Masukkan Nilai Y=";
    cin >> y;
    x = x >> 3;         //geser ke kiri 3 bit
    y = y >> 2;         //geser ke kanan 2 bit
    cout << "Hasil dari Geser 3 Bit Ke Kiri=" << x << endl;
    cout << "Hasil dari Geser 2 Bit Ke Kiri=" << y << endl;

}