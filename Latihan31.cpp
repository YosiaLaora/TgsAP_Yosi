#include<iostream>
#include<conio.h>
// Fungsi Void
// Jumat, 15 November2024

using namespace std;

void hitung(); // Mendeklarasika  (Prototype) Fungsi yang Tidak Menghasilkan Nilai

int main() {
	cout << "\n Menghitung Volume Kubus";
	hitung(); // Memanggil Fungsi Hitung
	return 0;
} 

void hitung()
{
	float sisi, volume;
	cout << "\n Sisi KUBUS : ";
	cin >> sisi;
	volume = sisi * sisi * sisi;
	cout << "\n Volume KUBUS yaitu : " << volume;
	
}