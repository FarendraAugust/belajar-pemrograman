#include <iostream>

using namespace std;

int main() {

    int a, b, c;            //deklarasi variabel
    cout << "Masukkan Nilai A = ";           //Keluarkan string masukkan nilai
    cin >> a;           //masukkan data int dari keyboard
    /*proses*/
    b= (a + 12 < 8);
    c = ! (b);

    cout << "Program Ekspresi NOT" << endl;
    cout << "Masukkan Nilai = " << a << endl;
    cout << "Nilai b = (a+12<8) = " << b <<endl;
    cout << "Nilai c = !(b) = " << c << endl;

}