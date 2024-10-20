#include<iostream>
#include<iomanip>
#include<string>
//Tugas
//Jumat, 18 Oktober 2024
using namespace std;

int main() {
    // Deklarasi array golongan dan gaji
    string golongan[] = {"Ia", "Ib", "IIa", "IIb", "IIIa", "IIIb"};
    long gajiGolongan[] = {500000, 750000, 1000000, 1500000, 1750000, 2500000};

    // Deklarasi array kode jabatan dan tunjangan
    string kodeJabatan[] = {"Dir", "Sek", "Wak", "Stf"};
    string jabatan[] = {"Direktur", "Sekretaris", "Wakil Direktur", "Staf Administrasi"};
    long tunjangan[] = {450000, 300000, 375000, 200000};

    string namaPegawai, kodeJ, gol;
    long pinjaman, totalGajiKotor, totalGajiBersih, pajak, gaji, totalTunjangan;
    int jpegawai = 0;
    char lagi;

    do {
        cout << "======================================" << endl;
        cout << "        GAJI PEGAWAI PT. TELKOM        " << endl;
        cout << "======================================" << endl;

        cout << "Nama Pegawai: " ; 
        cin >> namaPegawai;
        cout << "Golongan (Ia/Ib/IIa/IIb/IIIa/IIIb): "; 
        cin >> gol;
        
        cout << "Kode Jabatan (Dir/Sek/Wak/Stf): "; 
        cin >> kodeJ;
        
        cout << "Pinjaman: "; 
        cin >> pinjaman;

       	cout << setprecision(13);
        for (int i = 0; i < 6; i++) {
            if (golongan[i] == gol) {
                gaji = gajiGolongan[i];
                break;
            }
        }

        for (int i = 0; i < 4; i++) {
            if (kodeJabatan[i] == kodeJ) {
                totalTunjangan = tunjangan[i];
                break;
            }
        } 
        pajak = gaji * 0.05; 
        totalGajiKotor = gaji + totalTunjangan;
        totalGajiBersih = totalGajiKotor - pinjaman - pajak;
		jpegawai++;
		
        // Output hasil
        cout << "\n----- Rincian Gaji -----" << endl;
        cout << "Nama Pegawai     : " << namaPegawai << endl;
        cout << "Golongan         : " << gol << endl;
        cout << "Kode Jabatan     : " << kodeJ << endl; 
        cout << "Jabatan          : " << jabatan[(kodeJ == "Dir") ? 0 : (kodeJ == "Sek") ? 1 : (kodeJ == "Wak") ? 2 : 3] << endl;
        cout << "Gaji             : Rp" << gaji << endl;
        cout << "Tunjangan        : Rp" << totalTunjangan << endl;
        cout << "Pajak            : Rp" << pajak << endl;
        cout << "Pinjaman         : Rp" << pinjaman << endl;
        cout << "Total Gaji Kotor : Rp" << totalGajiKotor << endl;
        cout << "Total Gaji Bersih: Rp" << totalGajiBersih << endl;

        cout << "\nMasih ingin menghitung gaji lagi? (Y/T): "; 
        cin >> lagi;
    } while (lagi == 'Y' || lagi == 'y');
    
		cout << "\n===========================================================================================================================================================================\n";
		cout << setw(15) << left << "Nama Pegawai"
			 << setw(15) << "Golongan"
			 << setw(15) << "Kode Jabatan"
			 << setw(15) << "Jabatan" 
			 << setw(15) << "Gaji"
			 << setw(15) << "Tunjangan"
			 << setw(15) << "Pinjaman"
			 << setw(15) << "Pajak" 
			 << setw(15) << "Total Gaji Kotor"
			 << setw(15) << "Total Gaji Bersih" << endl;
		cout << "=====================================================================================================================================================================\n";
	
	for (int i = 0; i <jpegawai; i++) {
		cout << setw(15) << left << namaPegawai
			 << setw(15) << gol
			 << setw(15) << kodeJ
			 << setw(15) << jabatan
			 << setw(15) << gaji
			 << setw(15) << totalTunjangan
			 << setw(15) << pinjaman
			 << setw(15) << pajak
			 << setw(15) << totalGajiBersih
			 << setw(15) << totalGajiKotor << endl;
	}
	
	cout << "===========================================================================================================================================================================\n";
	
    return 0;
}