#include<iostream> 
//Nama : Yosia Laora S. lingga
//Kelas : TIFA2-02
//Tanggal Dibuat 14 September 2024
#include<iomanip>
using namespace std;
int main()

{
	float gperjam=500,jjkerja,lembur,tgaji;
	char npegawai[30];
	
	cout<<"PERHITUNGAN GAJI PEGAWAI HARIAN"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"Nama Pegawai : ";
	gets(npegawai);
	cout<<"Jumlah Jam Kerja : ";
	cin>>jjkerja;
	if(jjkerja>7){
		lembur=(1.5*gperjam*(jjkerja-7));
		tgaji=(7*gperjam) + lembur;
	}else {
		lembur=0;
		tgaji=(jjkerja*gperjam)+lembur;
	}
	cout<<"Total Gaji Pegawai Harian : "<<tgaji<<endl;
	return 0;
}