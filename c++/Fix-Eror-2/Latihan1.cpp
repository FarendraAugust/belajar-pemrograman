#include <iostream>

int main() {
  int x;

  std::cout << "Masukkan sebuah angka: ";

  std::cin >> x;

  if (x >= 10) {
    if (x <= 20)
    std::cout << "\n Nilai " << x << " ada di antara 10 dan 20";
    else
    std::cout << "\n Nilai " << x << " lebih dari 20";
  } else {
    std::cout << "\n Nilai " << x << " kurang dari 10";
  }
  return 0;
}