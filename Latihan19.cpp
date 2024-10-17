#include<iostream>
#include<iomanip>
//Array 2 Dimensi
//Jumat, 4 Oktober 2024
using namespace std;

int main() {
	const int maxkaryawan = 50;
	string namakaryawan[maxkaryawan];
	int jamkerja[maxkaryawan];
	float gajiperjam[maxkaryawan];
	float gajitotal[maxkaryawan];
	int jumlahkaryawan = 0;
	char lagi;
	
	do {
		cout << "Masukkan Nama Karyawan Ke-" << jumlahkaryawan + 1 << ": ";
		cin >> namakaryawan[jumlahkaryawan];
		cout << "Masukkan Jumlah Jam Kerja " << namakaryawan[jumlahkaryawan] << ": ";
		cin >> jamkerja[jumlahkaryawan];
		cout << "Masukkan Gaji Per Jam Untuk " << namakaryawan[jumlahkaryawan] << ": ";
		cin >> gajiperjam[jumlahkaryawan];
		
		gajitotal[jumlahkaryawan] = jamkerja[jumlahkaryawan]*gajiperjam[jumlahkaryawan];
		jumlahkaryawan++;
		
		cout << "Apakah Anda Ingin Input Data Lagi? (Y/T): ";
		cin >> lagi;
		
	} while (lagi =='y'|| lagi == 'Y');
	cout << "\n==============================================================\n";
	cout << setw(15) << left << "Nama"
		 << setw(15) << "Jam Kerja"
		 << setw(15) << "Gaji Perjam"
		 << setw(15) << "Gaji Total" << endl;
	cout << "===============================================================\n";
	
	for (int i = 0; i <jumlahkaryawan; i++) {
		cout << setw(15) << left << namakaryawan[i]
		 << setw(15) << jamkerja[i]
		 << setw(15) << gajiperjam[i]
		 << setw(15) << gajitotal[i] << endl;
	}
	
	cout << "===============================================================\n";
	
	return 0;
	
}