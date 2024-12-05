#include<iostream>
#include<conio.h>
// Fungsi Void
// Jumat, 15 November2024
// Menggunakan Parametri 1 Variable

using namespace std;

float hitung ( int s ); // int s : Parameter 1 yang menggandung banyak nilai
int main()
{
	float volume, sisi;
	
	cout << "\n Menghitung Volume KUBUS ";
	cout << "\n Sisi KUBUS : ";
	cin >> sisi;
	volume = hitung(sisi);
	cout << "\n Volume KUBUS yaitu : " << volume; 
}

float hitung ( int s )
{
	return ( s * s * s );
}