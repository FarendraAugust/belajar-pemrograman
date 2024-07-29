#include <iostream>

using namespace std;

int main() {

  float a,
  b,
  hasil;
  char aritmatika;

  cout << "Selamat datang di program kalkulator simpel \n \n";

  //memasukkan input dari user
  cout << "Masukkan bilangan pertama: ";
  cin >> a;
  cout << "Pilih operasi +, -, *, /: ";
  cin >> aritmatika;
  cout << "Masukkan bilangan kedua: ";
  cin >> b;

  cout << "\nHasil perhitungan: ";
  cout << a << aritmatika << b;

  if (aritmatika == '+') {
    hasil = a + b;
  } else if (aritmatika == '-') {
    hasil = a - b;
  } else if (aritmatika == '*') {
    hasil = a * b;
  } else if (aritmatika == '/') {
    hasil = a / b;
  }

  cout << " = " << hasil << endl;

}