#include <bits/stdc++.h>
using namespace std;

class Hotel{
	public:
		int lamaMenginap;
		int harga;
		int paket;
		int total_harga;
};

int main(){
	char repeat;
	do{	
	system("cls");
	Hotel data1;
	
	cout << "Program Menginap Di Hotel" << endl;
		cout << "-----------------------------------------------------------------------------------------" << endl;
		cout << "Durasi Menginap\t|\tSuperior\t|\tDeluxe\t	|\tPremium	\t|" << endl;
		cout << "----------------------------------------------------------------------------------------|" << endl;
		cout << " 1-2 Hari\t|\t100.000/night\t|\t150.000/night\t|\t200.000/night\t|" << endl;
		cout << " 3-4 Hari\t|\t90.000/night\t|\t135.000/night\t|\t180.000/night\t|	" << endl;
		cout << " >5 Hari\t|\t80.000/night\t|\t120.000/night\t|\t160.000/night\t|	" << endl;
		cout << "----------------------------------------------------------------------------------------- " << endl;
		cout << "Tipe Kamar" << endl;
		cout << "1. Superior" << endl;
		cout << "2. Deluxe" << endl;
		cout << "3. Premium" << endl;
	
	do{
		cout << "Pilih Tipe Kamar\t: ";
		cin >> data1.paket;
	}while(data1.paket <= 0 || data1.paket > 3);
	
	do{
		cout << "Masukkan Lama Menginap\t: ";
		cin >> data1.lamaMenginap;
	}while(data1.lamaMenginap <= 0);
	
	if(data1.paket == 1){
		if(data1.lamaMenginap <= 2){
			data1.harga = 100000;
			data1.total_harga = data1.harga * data1.lamaMenginap;
		}else if(data1.lamaMenginap >= 3 && data1.lamaMenginap <= 4){
			data1.harga = 90000;
			data1.total_harga = data1.harga * data1.lamaMenginap;
		}else if(data1.lamaMenginap >= 5){
			data1.harga = 80000;
			data1.total_harga = data1.harga * data1.lamaMenginap;
		}
	}else if(data1.paket == 2){
		if(data1.lamaMenginap <= 2){
			data1.harga = 150000;
			data1.total_harga = data1.harga * data1.lamaMenginap;
		}else if(data1.lamaMenginap >= 3 && data1.lamaMenginap <= 4){
			data1.harga = 135000;
			data1.total_harga = data1.harga * data1.lamaMenginap;
		}else if(data1.lamaMenginap >= 5){
			data1.harga = 120000;
			data1.total_harga = data1.harga * data1.lamaMenginap;
		}
	}else{
		if(data1.lamaMenginap <= 2){
			data1.harga = 200000;
			data1.total_harga = data1.harga * data1.lamaMenginap;
		}else if(data1.lamaMenginap >= 3 && data1.lamaMenginap <= 4){
			data1.harga = 180000;
			data1.total_harga = data1.harga * data1.lamaMenginap;
		}else if(data1.lamaMenginap >= 5){
			data1.harga = 160000;
			data1.total_harga = data1.harga * data1.lamaMenginap;
		}
	}
	cout << "\nTipe Kamar\t: " << data1.paket << endl;
	cout << "Lama menginap\t: " << data1.lamaMenginap << endl;
	cout << "Total Harga\t: " << data1.total_harga << endl;
	
	cout << "\nIngin memesan lagi(y/n)? ";
	cin >> repeat;
}
while(repeat == 'Y' || repeat == 'y');
}
