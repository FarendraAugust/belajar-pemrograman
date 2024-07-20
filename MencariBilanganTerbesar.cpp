#include <iostream>
using namespace std;

int main() {
  //mencari bilangan terbesar dari 3 buah bilangan

  int a,
  b,
  c;

  cout << "Bilangan 1: ";
  cin >> a;

  cout << "Bilangan 2: ";
  cin >> b;

  cout << "Bilangan 3: ";
  cin >> c;

  cout << "Bilangan Terbesar: ";

  if (a > b && a > c)
    cout << a << endl;
  else if (b > a && b > c)
    cout << b << endl;
  else if (c > a && c > b)
    cout << c << endl;
}