#include <iostream>

using namespace std;

int main() {

  float a,
  b,
  hasil;
  char operasi;

  cout << "Selamat datang di program kalkulator simpel" << endl;

  //memasukkan input dari user
  cout << "Masukkan bilangan pertama: ";
  cin >> a;
  cout << "Pilih operasi +, -, *, /: ";
  cin >> operasi;
  cout << "Masukkan bilangan kedua: ";
  cin >> b;

  cout << "Hasil perhitungan: ";
  cout << a << operasi << b;

  if (operasi == '+') {
    hasil = a + b;
  } else if (operasi == '-') {
    hasil = a - b;
  } else if (operasi == '*') {
    hasil = a * b;
  } else if (operasi == '/') {
    hasil = a / b;
  } else {
    cout << "\nOperasi tidak valid" << endl;
  }

  cout << " = " << hasil << endl;
  // © by Fariskha Agustino Farendra
}