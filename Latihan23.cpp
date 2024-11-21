#include<iomanip>
#include<iostream>
#include<conio.h>
using namespace std;
//Tanggal, 1 November 2024
//Materi Struck

struct data_mahasiswa
{
	char npm[9];
	char nama[20];
	int nilai;
};

int main() {
	data_mahasiswa data_mhs;
	
	cout << "--------------------------\n";
	cout << "   Input Data Mahasiswa   \n";
	cout << "--------------------------\n";
	cout << "NPM   : ";
	cin >> data_mhs.npm;
	cout << "Nama  : ";
	cin >> data_mhs.nama;
	cout << "Nilai : ";
	cin >> data_mhs.nilai;
	cout << "--------------------------\n";
	cout << "Data Yang Telah Anda Input\n";
	cout << "--------------------------\n";
	cout << "NPM   : " << data_mhs.npm << endl;
	cout << "Nama  : " << data_mhs.nama << endl;
	cout << "Nilai : " << data_mhs.nilai << endl;
	cout << "--------------------------\n";
	return 0;
}
