#include <iostream>
#include<iomanip>
//Tanggal 27 September
using namespace std;

int main() {
	int jumlahdata,jumlahbarang,totalpenjualan = 0;
	
	cout << "Masukkan Jumah Data ";
	cin >> jumlahdata;
	
	for (int i =1; i <= jumlahdata; i++) {
		cout << "Masukkan Jumlah Data Yang Terjual DiToko " << i << ": ";
		cin >> jumlahbarang;
		
		totalpenjualan += jumlahbarang;
	}
	cout << "Total Barang Yang Terjual DiToko Adalah : " << totalpenjualan << endl;
	
	return 0;
}