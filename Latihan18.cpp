#include<iostream>
//Array 2 Dimensi
//Jumat, 4 Oktober 2024
using namespace std;

int main() {
	int matriksA[2][2], matriksB[2][2], hasil[2][2];
	
	// Input Untuk Matriks A
	cout << "Masukkan Elemen Matriks A (2x2) : " << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; i++) {
			cout << "A[" << i << "][" << j << "]: ";
			cin >> matriksA[i][j];
		}
	}
	
	// Input Untuk Matriks B
	cout << "Masukkan Elemen Matriks B (2x2) : " << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; i++) {
			cout << "B[" << i << "][" << j << "]: ";
			cin >> matriksB[i][j];
		}
	}
	
	// Menjumlahkan Kedua Matriks
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; i++) {
			hasil[i][j] = matriksA[i][j] + matriksB[i][j];
		}
		cout << endl;
	}
	return 0;
}