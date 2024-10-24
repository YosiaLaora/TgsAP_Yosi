#include <iostream>
using namespace std;

int main() {
    double penjualan, komisi;

    // Input jumlah penjualan
    cout << "Masukkan jumlah penjualan: ";
    cin >> penjualan;

    // Perhitungan komisi
    if (penjualan <= 500000) {
        komisi = penjualan * 0.10;  
   } else {
        komisi = 500000 * 0.10; 
        komisi += (penjualan - 500000) * 0.15;  
    }

    // Output komisi
    cout << "Komisi yang diterima: Rp " << komisi << endl;

    return 0;
}