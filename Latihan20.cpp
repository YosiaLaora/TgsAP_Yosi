#include<iostream>
#include<iomanip>
//Tugas
//Jumat, 4 Oktober 2024
using namespace std;

int main() {
	const int maxbarang = 100;
	string nbarang[maxbarang];
	int harga[maxbarang], jjual[maxbarang], tharga[maxbarang];
	float  diskon[maxbarang], tbayar[maxbarang];
	int jdata = 0;
	char lagi;
	
	cout << "===========================" << endl;
	cout << "Penjualan Barang Elektronik" << endl;
	cout << "===========================" << endl;
	
	do {
		cout << "Nama Barang : ";
		cin >> nbarang[jdata];
		cout << "Harga : " ;
		cin >> harga[jdata] ;
		cout << "Jumlah Jual : ";
		cin >> jjual[jdata];
		
		cout << setprecision(13);
		tharga[jdata]=harga[jdata]*jjual[jdata];
		cout << "Total Harga : " << tharga[jdata] << endl;
		jdata++;
		
		diskon[jdata]=tharga[jdata]*0.1;
		
		tbayar[jdata]=tharga[jdata]-diskon[jdata];
		
		cout << "Apakah Mau Input Lagi? (Y/T) : ";
		cin >> lagi;
		jdata++;
		
	} while (lagi == 'y'||lagi == 'Y');
	
		cout << "\n=============================================================================\n";
	cout << setw(15) << left << "Nama Barang"
		 << setw(15) << "Harga"
		 << setw(15) << "Jumlah Jual"
		 << setw(15) << "Total Harga" 
		 << setw(15) << "Diskon"
		 << setw(15) << "Total Bayar" << endl;
	cout << "===============================================================================\n";
	
	for (int i = 0; i <jdata; i++) {
		cout << setw(15) << left << nbarang[i]
			 << setw(15) << harga[i]
			 << setw(15) << jjual[i]
			 << setw(15) << tharga[i]
			 << setw(15) << diskon[i]
			 << setw(15) << tbayar[i] << endl;
	}
	
	cout << "================================================================================\n";
	
	return 0;
}