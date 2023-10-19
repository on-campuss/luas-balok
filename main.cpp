#include <iostream>
using namespace std;

class Balok {
private:
    float panjang, lebar, tinggi;

public:
    // Fungsi untuk mengatur nilai panjang, lebar, dan tinggi
    void setDimensi(float p, float l, float t)
    {
        panjang = p;
        lebar = l;
        tinggi = t;
    }

    // Fungsi untuk menghitung dan mengembalikan luas permukaan balok
    float hitungLuas()
    {
        return 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
    }

    // Fungsi untuk menghitung dan mengembalikan volume balok
    float hitungVolume()
    {
        return panjang * lebar * tinggi;
    }
};

int main(){
    Balok balok;

    float p, l, t;
    cout << "Masukkan panjang balok: ";
    cin >> p;
    cout << "Masukkan lebar balok: ";
    cin >> l;
    cout << "Masukkan tinggi balok: ";
    cin >> t;

    balok.setDimensi(p, l, t);

    cout << "Luas balok: " << balok.hitungLuas() << endl;
    cout << "Volume balok: " << balok.hitungVolume() << endl;

    return 0;
}