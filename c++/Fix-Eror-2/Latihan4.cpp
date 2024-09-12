#include <iostream>

int main() {

  int x,
y;

  std::cout << "Masukkan sebuah bilangan bulat : ";

  std::cin >> x;

  std::cout << "Masukkan sebuah bilangan bulat lain: ";

  std::cin >> y;

  if (x > 0 && y > 0) {
    std::cout << "Kedua bilangan tersebut adalah bilangan POSITIF \n";
  } else if (x > 0 || y > 0) {
    std::cout << "Salah satu bilangan tersebut adalah bilangan POSITIF \n";
  } else {
    std::cout << "Kedua bilangan tersebut BUKAN bilangan POSITIF \n";
  }

  return 0;
}