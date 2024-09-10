#include <iostream> //Header

using namespace std; //Library yang digunakan

//Deklarasi variabel
int main() {
  int n; //Variabel untuk menyimpan data "n"

  cout << "Masukkan Jumlah Baris: "; //Output
  cin >> n; //Input "n"

  for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++)
            cout << "* ";
        cout << endl;
    }
  return 0;
}