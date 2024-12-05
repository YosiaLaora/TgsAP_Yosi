#include <iostream>
#include <conio.h> // untuk getch()

using namespace std;

// Fungsi untuk menghitung gaji pokok
float gajiPokok(int jamKerja) {
    return jamKerja * 2000;
}

// Fungsi untuk menghitung uang lembur
float uangLembur(int jamKerja) {
    if (jamKerja > 7) {
        int jamLembur = jamKerja - 7;
        return jamLembur * 3000;
    }
    return 0;
}

// Fungsi untuk menghitung uang makan
int uangMakan(int jamKerja) {
    if (jamKerja >= 8 && jamKerja < 10) {
        return 1500;
    } else if (jamKerja >= 10) {
        return 2500;
    }
    return 0;
}

// Fungsi untuk menghitung jasa lembur
int jasaLembur(int jamKerja) {
    if (jamKerja >= 9) {
        return 3000;
    }
    return 0;
}

void garis() {
    for (int i = 0; i < 50; i++) {
        cout << "=";
    }
    cout << endl;
}

int main() {
    int jamKerja;
    char lagi;
    
    do {
        // Input jumlah jam kerja
        cout << "\n\nProgram Menghitung Gaji Harian Karyawan PT Rejeki Nomplok\n";
        garis();
        cout << "Masukkan jumlah jam kerja karyawan: ";
        cin >> jamKerja;
        
        // Menghitung komponen gaji
        float gaji_pokok = gajiPokok(jamKerja);
        float lembur = uangLembur(jamKerja);
        int makan = uangMakan(jamKerja);
        int jasa_lembur = jasaLembur(jamKerja);
        float totalGaji = gaji_pokok + lembur + makan + jasa_lembur;
        
        // Menampilkan hasil
        cout << "\nRincian Gaji:\n";
        cout << "Gaji Pokok       : Rp. " << gaji_pokok << endl;
        cout << "Uang Lembur      : Rp. " << lembur << endl;
        cout << "Uang Makan       : Rp. " << makan << endl;
        cout << "Jasa Lembur      : Rp. " << jasa_lembur << endl;
        garis();
        cout << "Total Gaji Diterima: Rp. " << totalGaji << endl;
        
        // Tanya apakah ingin menghitung lagi
        cout << "\nApakah ingin menghitung lagi? (Y/N): ";
        lagi = getche();
        cout << endl;
    } while (lagi == 'Y' || lagi == 'y');
    
    return 0;
}
