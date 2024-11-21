#include<iostream>
#include<conio.h>
#include<iomanip>
//Tgl 8 November 2024
//Materi String
//Membaca Panjang Karakter

using namespace std;

int main () {
	char nama[20];
	char alamat[35];
	
	cout << "Masukkan Nama Anda     : ";
	cin.getline(nama, sizeof(nama) );
	cout << "Masukkan Alamat Anda   : ";
	cin.getline(alamat, sizeof(alamat) );
	cout << "Nama Anda Adalah       : " << nama << endl;
	cout << "Alamat Anda            : " << alamat << endl;
	
	return 0;
}