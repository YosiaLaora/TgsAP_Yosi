//Nama : Yosia Laora S. lingga
//Kelas : TIFA2-02
//Tanggal Dibuat 02 September 2024
#include<iostream> 
#include<iomanip>
using namespace std;
int main()

{
	cout<< "PENJUALAN BARANG ELEKTRONIK" <<endl;
	char namabar[30];
	float harga,jumlahjual,totalharga,diskon,totalbayar=0;
	cout<<"Nama Barang = ";
	cin>>namabar;
	cout<<"Harga = ";
	cin>>harga;
	cout<<"Jumlah Jual = ";
	cin>>jumlahjual;
	cout<<setprecision(13);
	totalharga=harga*jumlahjual;
	cout<<"Total Harga = ";
	diskon=0.1*totalharga;
	cout<<"Diskon = "<<diskon<<endl;
	totalbayar=totalharga-diskon;
	cout<<"Total Bayar = "<<totalbayar<<endl;
	return 0;
}