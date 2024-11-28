#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

using namespace std;

int main() {
    string np;
    string gol;
    string kjabatan;
    string jabat;
    int gaji = 0, tunjangan = 0, pinjaman = 0, tgk, tgb;
    float pajak;
    char lg = 'Y';

    while (lg == 'Y' || lg == 'y') {
        cout << "------------------------------------\n";
        cout << "        GAJI PEGAWAI PT.TELKOM      \n";
        cout << "------------------------------------\n";

        cout << "Nama Pegawai : ";
        getline(cin, np);

        cout << "Golongan (Ia/Iia/IIIa/Ib/Iib/IIIb): ";
        cin >> gol;

        cout << "Kode Jabatan (Dir/Sek/Wak/Stf): ";
        cin >> kjabatan;

        if (kjabatan == "Dir") {
            jabat = "Direktur";
            tunjangan = 450000;
        } else if (kjabatan == "Sek") {
            jabat = "Sekretaris";
            tunjangan = 300000;
        } else if (kjabatan == "Wak") {
            jabat = "Wakil Direktur";
            tunjangan = 375000;
        } else if (kjabatan == "Stf") {
            jabat = "Staf Administrasi";
            tunjangan = 200000;
        } else {
            cout << "Kode Jabatan Tidak Valid: " << kjabatan << endl;
            continue; // Kembali ke awal jika kode jabatan salah
        }

        // Menentukan gaji berdasarkan golongan
        if (gol == "Ia") {
            gaji = 500000;
        } else if (gol == "Iia") {
            gaji = 750000;
        } else if (gol == "IIIa") {
            gaji = 1000000;
        } else if (gol == "Ib") {
            gaji = 1500000;
        } else if (gol == "Iib") {
            gaji = 1750000;
        } else if (gol == "IIIb") {
            gaji = 2500000;
        } else {
            cout << "Golongan Tidak Valid: " << gol << endl;
            continue; 
        }

        cout << "Jabatan : " << jabat << endl;
        cout << "Gaji    : " << gaji << endl;
        cout << "Tunjangan : " << tunjangan << endl;

        pajak = 0.05 * gaji; 
        tgk = gaji + tunjangan;
        tgb = tgk - pinjaman - pajak;

        cout << fixed << setprecision(2);
        cout << "Pajak : " << pajak << endl;
        cout << "Total Gaji Kotor  : " << tgk << endl;
        cout << "Total Gaji Bersih : " << tgb << endl;

        cout << "Input Lagi [Y/T]: ";
        lg = getch();
        cout << endl;

    }

    return 0;
}
