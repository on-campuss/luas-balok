#include <iostream>
using namespace std;

const float PI = 3.14159; // Konstanta PI

int main() {
    float jariJari;
    
    // Meminta pengguna untuk memasukkan jari-jari lingkaran
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;

    // Menghitung luas lingkaran
    float luas = PI * jariJari * jariJari;

    // Menghitung keliling lingkaran
    float keliling = 2 * PI * jariJari;

    // Menampilkan hasil
    cout << "Luas lingkaran: " << luas << endl;
    cout << "Keliling lingkaran: " << keliling << endl;

    return 0;
}
