#include<iostream>
#include<fstream>
// Jumat 22 November 2024
// Materi Pemrograman File di C++ 

using namespace std;

int main() {
	ifstream file("data.txt");
	string line;
	
	if (file.is_open()) {
		while (getline(file, line)) {
			cout << line << endl;
		}
		file.close();
	} else {
		cout << "File Tidak DiTemukan";
	}
	return 0;
}