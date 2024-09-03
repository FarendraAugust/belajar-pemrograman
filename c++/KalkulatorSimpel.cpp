#include <iostream>

using namespace std;

int main() {

  float a,
  b,
  hasil;
  char aritmatika;

  cout << "Selamat datang di program kalkulator simpel" << endl;

  //memasukkan input dari user
  cout << "Masukkan bilangan pertama: ";
  cin >> a;
  cout << "Pilih operasi +, -, *, /: ";
  cin >> aritmatika;
  cout << "Masukkan bilangan kedua: ";
  cin >> b;

  cout << "Hasil perhitungan: ";
  cout << a << aritmatika << b;

  if (aritmatika == '+') {
    hasil = a + b;
  } else if (aritmatika == '-') {
    hasil = a - b;
  } else if (aritmatika == '*') {
    hasil = a * b;
  } else if (aritmatika == '/') {
    hasil = a / b;
  } else {
    cout << "\nOperasi tidak valid" << endl;
  }

  cout << " = " << hasil << endl;
  // © by Fariskha Agustino Farendra
}