#include <iostream>

using namespace std;

int main() {
    float a, b, c, d, e, f;

    cout << "Masukkan Nilai A: ";
    cin >> a;
    cout << "Masukkan Nilai B: ";
    cin >> b;
    cout << "Masukkan Nilai C: ";
    cin >> c;
    cout << "Masukkan Nilai D: ";
    cin >> d;
    e = a + b *c / d - b;
    f = (a + b) * c / d * (a - b);
    cout << "Nilai dari e=a+b*c/d-b: " << e << endl;
    cout << "Nilai dari f=(a+b)*c/d: " << f << endl; 
    
}