#include <iostream>
#include <string.h>
#include <conio.h>
// Jumat, 15 November2024
// MultiFungsi & Multi Parameter
// Menggunakan Parameter Lebih Dari Satu, Fungsi nya Juga Lebih Dari Satu

using namespace std; //contoh mennggunakan multi fungsi, dan multi parametrik

// Empat Fungsi : gaji, pajak, tunjang, garis

float gaji_pk(char gol), pajak (float gaji);
float tunjang (float gaji, char status, int anak );
void garis ();

int main()
{
	int anak ;
	char golong,stat;
	float gaji, gajipokok,tnj,pjk;
	while (1)// (while1) adalah bernilai true atau benar
	{
		/*Cetak Judul Program */
		cout << "\n\n Program Untuk Menghitung Gaji Karyawan " ;
		cout << "\n\n Untuk Menghitung Program Ketik X Pada Golongan \n" ;
		
		garis();
		
		/*Input Data */
		cout << "\n Golongan Karyawan (A,C & X Untuk Selesai) : ";
		golong = getche();
		if (golong == 'x'|| golong=='X') break;
		
		cout <<"\n Status Karyawan (N=Nikah & B= Belum) : ";
		stat = getche();
		if( stat =='N'|| stat =='n')
		{
			cout <<"\n\t Jumlah anak : ";
			cin >> anak;
		}else 
		cout << "\n\t";
		/*Menghitung  Gaji bersih */
		gajipokok = gaji_pk(golong);
		tnj = tunjang(gajipokok, stat, anak);
		pjk = pajak(gajipokok);
		gaji = gajipokok + tnj - pjk;
		
		/*Cetak Output*/
		
		cout << "\n\n";
		cout << "\n Gaji Pokok  = Rp. " << gajipokok ;
		cout << "\n Tunjangan   = Rp. " << tnj;
		cout << "\n-----------------------------------------------------------------------------------+";
		cout << "\n Total       = Rp. " << gajipokok + tnj;
		cout << "\n Pajak       = Rp. " << pjk;
		cout << "\n-----------------------------------------------------------------------------------+";
		cout << "\n Gaji Bersih = Rp. " << gaji;
		cout << "\n-----------------------------------------------------------------------------------+";
		cout << "\n\n Tekan Sembarang Tombol ";
		getch() ;
		
	}
}
void garis()

/* Menggambar Garis */
{
	cout <<"\n"; 
	for (int i=1 ;i<=50; ++i)
	cout << "\xB1";
}

/* Menghitung Gaji Pokok */
float gaji_pk (char gol)
{
	switch (gol)
	{case 'A':
		case'a':
			return(50000.00);
	case'B':
		case'b':
			return (100000.00);
	case'C':
		case'c':
			return(1500000.00);
	default :
		return(0.00);
		}
}

/* Menghitung Tunjangan */
float tunjang(float gaji,char status,int anak)
{
	float ta, ti;
	if (status =='B'||status =='b') // (// artinya or)
	{
		ta =0;
		ti =0;
	}
	else if (status == 'N'|| status=='n')
	{
		ta =0,15 * gaji;
		ti = anak > 3 ? 3* .1 * gaji : anak * .1 * gaji;
	}// ?(White Card) artinya sama dengan If (jika), Untuk Menyingkat Perintah
	return (ta +ti);
}
/* Menghitung Pajak */
float pajak(float gaji)
{
	float pjk;
	pjk = gaji <= 96000 ? 0 : .15 * (gaji-96000);
	return(pjk);
}