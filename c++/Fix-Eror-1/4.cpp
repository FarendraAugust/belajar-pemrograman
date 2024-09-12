#include <iostream>

using namespace std;

int main() {

    char a, b, c, x, y;
    cout << "Masukkan Nilai X=";
    cin  >> x;
    cout << "Masukkan Nilai X=";
    cin >> y;
    a = x & y;
    b = x || y;
    c = x ^ y;
    cout << '\n';
 
    cout << "Hasil dari" << x << "&" << y << ''=" << a << endl;
}