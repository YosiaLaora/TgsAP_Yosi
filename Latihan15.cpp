#include <iostream>
#include<conio.h>
//Tanggal 27 September
using namespace std;

int main() {
	char lagi='Y';
	int jumlahdata,jumlahbarang,totalpenjualan = 0;
	
	while(lagi=='Y' ||lagi=='y') {
		cout << "Masukkan Jumlah Data Yang Terjual DiToko " << ": ";
		cin >> jumlahbarang;
		
		totalpenjualan += jumlahbarang;//singkatnya totalpenjualan = totalpenjualan+jumlahbarang
	
	cout << "Total Barang Yang Terjual DiToko Adalah : " << totalpenjualan << endl;
	cout << "Apakah Mau Input Lagi[Y/T] :";
			lagi=getch();
	cout << endl;
}
	return 0;
}