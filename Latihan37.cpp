#include<iostream>
#include<fstream>
// Jumat 22 November 2024
// Materi Pemrograman File di C++ 
// File ini Terhubung dengan Latihan37
using namespace std;

int main() {
	ofstream file("data.txt");
	
	if (file.is_open()) {
		file << "STMIK Penusa\n";
		file << "Belajar Algoritma Pemrograman.";
		file.close();
	} else {
		cout << "File Tidak Bisa DiBuka";
	}
	return 0;
}