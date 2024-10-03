#include <iostream>
#include<iomanip>
//Tanggal 27 September
using namespace std;

int main() {
	for (int i =0; i <5; i++) {
		for (int j =0; j <5; j++) {
			for (int k =0; k <5; k++) {
				cout << "Perulangan Ke-" << i << ',' << j << ',' << k << endl;
			}
		}
	}
	return 0;
}