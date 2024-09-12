#include <iostream.h>

using namespace std;

int main() {

  int bil;

  cout << "Masukkan 2 digit angka terakhir NIM Anda: ";

  cin >> bil;

  if (bil %2 == 0) {
    cout << "\n Digit NIM Anda adalah bilangan GENAP" << endl;
  } else {
    cout << "\n Digit NIM Anda adalah bilangan GANJIL" << endl;
  }
}