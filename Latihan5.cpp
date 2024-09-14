//Nama : Yosia Laora S. lingga
//Kelas : TIFA2-02
//Tanggal Dibuat 02 September 2024
#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
	cout<< "GAJI KARYAWAN STMIK PENUSA" <<endl;
	char namapegawai[30],jabatan[30];
	float gaji,pajak,pinjaman,gaber=0;
	cout<<"Nama Pegawai = ";
	cin>>namapegawai;
	cout<<"Jabatan = ";
	cin>>jabatan;
	cout<<"Gaji = ";
	cin>>gaji;
	cout<<setprecision(13);
	pajak=0.15*gaji;
	cout<<"Pajak = "<<pajak<<endl;
	cout<<"Pinjaman = ";
	cin>>pinjaman;
	gaber=gaji-(pinjaman*pajak);
	cout<<"Gaji Bersih = "<<gaber<<endl;
	return 0;
}