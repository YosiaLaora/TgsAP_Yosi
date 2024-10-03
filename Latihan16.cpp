#include<iostream>
#include<conio.h>
using namespace std;
int main()
//Nama : Yosia Laora S. lingga
//Kelas : TIFA2-02

{
	 float komisi1,jjual,komisi2,tkomisi,harga=500000;
	 char nsales[30], lagi='Y';
	 
	 while(lagi=='Y' ||lagi=='y') {
	 cout<<"Nama Salesman : ";
	 cin>>nsales;
	 cout<<"Jumlah Penjualan : ";
	 cin>>jjual;
	 if(jjual>500000){
	 	komisi1=(harga*0.1);
	 	komisi2=((jjual-harga)*0.15);
	 	tkomisi=komisi1+komisi2;
	 }else{
	 	komisi1=0;
	 	komisi2=0;
	 	tkomisi=komisi1+komisi2;
	 }
	 cout<<"Total Komisi : "<<tkomisi<<endl;
	 	cout << "Apakah Mau Input Lagi[Y/T] :";
			lagi=getch();
	cout << endl;
}
	 return 0;
}