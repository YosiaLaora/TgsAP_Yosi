#include<iomanip>
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
//Untuk Gotoxy
#include<windows.h>
//Untuk Membersihkan Layar
#include<cstdlib>
//Untuk Karakter
using namespace std;
//Tanggal, 1 November 2024
//Tugas

void gotoxy(int x, int y)
{
	COORD coord; //Struct Untuk Mengatur Kordinat
	coord.X =x;  //Kordinat X
	coord.Y =y;  //Kordinat Y
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

struct pdata_nilai
{
	char npm[10];
	char nama[20];
}nilai[10];

int main() {
	int mid;
	int sem;
	int akhir,i, n=0;
	char huruf;
	char lg='Y';
	while (lg=='Y'||lg=='y')
	{
		system("cls");
		cout << "--------------------------------\n";
		cout << " DATA NILAI UJIAN PEMROGRAMAN C++ ";
		cout << "       Dosen : Budiman, S.SI      ";
		cout << "--------------------------------\n";
		n++;
		
		cout << "NPM : ";
		gets(nilai[n].npm);
		cout << "Nama : ";
		gets(nilai[n].nama);
		cout << "Nilai Mid : ";
		cin >> mid;
		cout << "Nilai Semester : ";
		cin >> sem;
		
		cout << setprecision(15);
		akhir=(0.4*mid)+(0.5*sem);
		cout << "Nilai Akhir : " << akhir << endl;
		n++;
		
		if (akhir>=80 && akhir<=100)
		huruf = 'A';
		else if (akhir>=70 && akhir<=79)
		huruf = 'B';
		else if (akhir>=55 && akhir<=69)
		huruf = 'C';
		else if (akhir>=40 && akhir<=54)
		huruf = 'D';
		else if (akhir>=0 && akhir<=39)
		huruf = 'E';
		cout << "Nilai Huruf : " << huruf << endl;
		cout << "================================================================/n";
		cout << "Input Lagi[Y/T] : ";
		lg=getch();
	}
	
	system("cls");
	gotoxy(5,3); cout << "                                              Laporan Nilai Ujian                                 \n";
	gotoxy(5,4); cout << "--------------------------------------------------------------------------------------------------\n";
	gotoxy(5,5); cout << "NO NPM      NAMA         NILAI MID        NILAI SEMESTER          NILAI AKHIR         NILAI HURUF \n";
	gotoxy(5,6); cout << "--------------------------------------------------------------------------------------------------\n";
	
	for(i = 1; i <= n; i++)
	{
		gotoxy(6,6+i); cout << i;
		gotoxy(9,6+i); cout << nilai[i].npm;
		gotoxy(17,6+i); cout << nilai[i].nama;
		gotoxy(38,6+i); cout << mid;
		gotoxy(54,6+i); cout << sem;
		gotoxy(79,6+i); cout << akhir;
		gotoxy(90,6+i); cout << huruf;
}
	gotoxy(5,7+i); cout << "-------------------------------------------------\n";
	
	return 0;
}