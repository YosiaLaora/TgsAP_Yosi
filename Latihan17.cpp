#include<iostream>
//Array 1 Dimensi
//Jumat, 4 Oktober 2024
using namespace std;

int main() {
	int nilai[10],total = 0;
	float ratarata;
	
	//Input Nilai
	for (int i = 0; i < 10; i++) {
		cout << "Masukkan Nilai Ke-" << i + 1 << ": ";
		cin >> nilai[i];
		total += nilai[i];  //Menghitung Nilai Aslinya : total=total+nilai[1]
	}
	
	//Menghitung Rata-Rata
	ratarata = total / 10.0;
	
	//Menampilkan Hasil
	cout << "Total Nilai : " << total << endl;
	cout << "Rata-Rata Nilai : " << ratarata << endl;
	
	return 0;
}