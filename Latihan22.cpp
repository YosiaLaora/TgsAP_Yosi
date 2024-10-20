#include <iostream>
#include <iomanip>
#include <string>
//Tugas
using namespace std;

int main() {
    // Data jurusan
    string kodeJurusan[] = {"SI", "TI", "KA", "MI"};
    string namaJurusan[] = {"Sistem Informasi", "Teknik Informatika", "Komputer Akuntansi", "Manajemen Informatika"};
    int pembayaranAwal[] = {2100000, 2500000, 1750000, 1500000};
    int jumlahCicilan[] = {7, 6, 6, 6};
    int besarCicilan[] = {300000, 300000, 200000, 250000};

    string namaMahasiswa, kode;
    int pembayaranKe, npm, uangKuliah, uangKuliahTerbayar, sisaUangKuliah;
    int jmahasiswa;
    char ulang;

    do {
        cout << "=======================================" << endl;
        cout << "         PEMBAYARAN UANG KULIAH        " << endl;
        cout << "=======================================" << endl;

        cout << "Masukkan Nama Mahasiswa: ";
        cin >> namaMahasiswa;
        cout << "Masukkan NPM: ";
        string npm;
        cin >> npm;
        cout << "Masukkan Kode Jurusan (SI/TI/KA/MI): ";
        cin >> kode;
        cout << "Masukkan Pembayaran ke: ";
        cin >> pembayaranKe;
        
        cout << setprecision(13);
        int uangKuliah = 0, uangKuliahTerbayar = 0, sisaUangKuliah = 0;

        int idx = -1;
        for (int i = 0; i < 4; i++) {
            if (kode == kodeJurusan[i]) {
                idx = i;
                break;
            }
        }

        if (idx != -1) {
            uangKuliah = pembayaranAwal[idx] + (jumlahCicilan[idx] * besarCicilan[idx]);

            uangKuliahTerbayar = pembayaranAwal[idx] + (pembayaranKe * besarCicilan[idx]);
            
            sisaUangKuliah = uangKuliah - uangKuliahTerbayar;
            jmahasiswa++;

            cout << "\n=========== PEMBAYARAN UANG KULIAH ===========\n";
            cout << "Nama Mahasiswa   		 : " << namaMahasiswa << endl;
            cout << "NPM              		 : " << npm << endl;
            cout << "Kode Jurusan     		 : " << kode << endl;
            cout << "Jurusan         		 : " << namaJurusan[idx] << endl;
            cout << "Pembayaran Awal  		 : Rp " << pembayaranAwal[idx] << endl;
            cout << "Jumlah Cicilan  		 : " << jumlahCicilan[idx] << endl;
            cout << "Besar Cicilan  		 : Rp " << besarCicilan[idx] << endl;
            cout << "Pembayaran Ke- 		 :  " << pembayaranKe << endl;
            cout << "Uang Kuliah     		 : Rp " << uangKuliah << endl;
            cout << "Uang Kuliah Terbayar	 : Rp " << uangKuliahTerbayar << endl;
            cout << "Sisa Uang Kuliah		 : Rp " << sisaUangKuliah << endl;
            cout << "===============================================\n";
        } else {
            cout << "Kode jurusan tidak ditemukan.\n";
        }

        cout << "\nMasih ingin menghitung (Y/T)? ";
        cin >> ulang;
    } while (ulang == 'Y' || ulang == 'y');
    
		cout << "\n===========================================================================================================================================================================\n";
		cout << setw(15) << left << "Nama Mahasiswa"
			 << setw(15) << "NPM"
			 << setw(15) << "Kode Jurusan"
			 << setw(15) << "Jurusan" 
			 << setw(15) << "Pembayaran Awal"
			 << setw(15) << "Jumlah Cicilan"
			 << setw(15) << "Besar Cicilan"
			 << setw(15) << "Pembayaran Ke-" 
			 << setw(15) << "Uang Kuliah"
			 << setw(15) << "Uang Kuliah Terbayar" 
			 << setw(15) << "Sisa Uang Kuliah" << endl;
		cout << "=====================================================================================================================================================================\n";
	
	for (int i = 0; i <jmahasiswa; i++) {
		cout << setw(15) << left << namaMahasiswa
			 << setw(15) << npm
			 << setw(15) << kode
			 << setw(15) << namaJurusan
			 << setw(15) << pembayaranAwal
			 << setw(15) << jumlahCicilan
			 << setw(15) << besarCicilan
			 << setw(15) << pembayaranKe
			 << setw(15) << uangKuliah
			 << setw(15) << uangKuliahTerbayar
			 << setw(15) << sisaUangKuliah << endl;
	}
	
	cout << "===========================================================================================================================================================================\n";
	

    return 0;
}