#include <iostream>

using namespace std;

int main() {

  int a, b, c, d, e, j, k, l, m, n;

  cout << "\tMasukkan nilai a : ";
  cin >> a;
  cout << "\tMasukkan nilai b : ";
  cin >> b;
  cout << "\tMasukkan nilai c : ";
  cin >> c;

  cout << endl;

  //proses
  d = (a*b)-c/(b+a);
  e = d << 2;

  cout << "Nilai dari d = (a*b)-c/(b+a) = " << d << endl;
  cout << "Hasil dari Geser 2 Bit Kekiri = " << e << endl;

  cout << endl;

  cout << "\tMasukkan nilai j : ";
  cin >> j;
  cout << "\tMasukkan nilai k : ";
  cin >> k;
  cout << "\tMasukkan nilai l : ";
  cin >> l;

  cout << endl;

  //proses
  m = j*(k+l);
  n = m >> 3;

  cout << "Nilai dari m = j*(k+l) = " << m << endl;
  cout << "Hasil dari Geser 3 Bit Kekanan = " << n << endl;

  cout << endl;

  //sama dengan / tidak sama dengan
  if (d == n) {
    cout << d << " Sama Dengan " << n << endl;
  } else {
    cout << d << " Tidak Sama Dengan " << n << endl;
  }

  //perbandingan
  if (d > n) {
    cout << d << " Lebih Besar Dari " << n << endl;
  } else if (d < n) {
    cout << d << " Tidak Lebih Besar Dari " << n << endl;
  }
  return 0;
}