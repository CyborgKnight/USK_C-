#include <bits/stdc++.h>
using namespace std;

int tipeKamar, lamaMenginap, total;
char ulang;

int main(){
	do{
		system("cls");
		cout << "Program Menginap Di Hotel" << endl;
		cout << "-----------------------------------------------------------------------------------------" << endl;
		cout << "Durasi Menginap	|	Superior	|	Deluxe	        |	  Premium	|" << endl;
		cout << "----------------------------------------------------------------------------------------|" << endl;
		cout << "1-2 Hari	|	100.000/night	|	150.000/night	|	200.000/night	|	   " << endl;
		cout << "3-4 Hari	|	90.000/night	|	135.000/night	|	180.000/night	|	" << endl;
		cout << ">5 Hari	        |	80.000/night	|	120.000/night	|	160.000/night	|	" << endl;
		cout << "----------------------------------------------------------------------------------------- " << endl;
		cout << "Tipe Kamar" << endl;
		cout << "1. Superior" << endl;
		cout << "2. Deluxe" << endl;
		cout << "3. Premium" << endl;
		
		// memilih tipe kamar
		do{
			cout << "Pilih Tipe Kamar	: ";
			cin >> tipeKamar;			
		} while(tipeKamar < 1 || tipeKamar > 3);
		
		// lama menginap
		do{
			cout << "Lama Menginap		: ";
			cin >> lamaMenginap;			
		} while(lamaMenginap < 1);
		
		// sistem untuk menghitung total harga		
		if(tipeKamar == 1){
			if(lamaMenginap <= 2){
				int base = 100000;
				total = base*lamaMenginap;
			} else if(lamaMenginap >= 3 && lamaMenginap <=4){
				int base = 90000;
				total = base*lamaMenginap;
			} else if(lamaMenginap >= 5){
				int base = 80000;
				total = base*lamaMenginap;
			}			
		} else if(tipeKamar == 2){
			if(lamaMenginap <= 2){
				int base = 150000;
				total = base*lamaMenginap;
			} else if(lamaMenginap >= 3 && lamaMenginap <=4){
				int base = 135000;
				total = base*lamaMenginap;
			} else if(lamaMenginap >= 5){
				int base = 120000;
				total = base*lamaMenginap;
			}						
		} else if(tipeKamar == 3){
			if(lamaMenginap <= 2){
				int base = 200000;
				total = base*lamaMenginap;
			} else if(lamaMenginap >= 3 && lamaMenginap <=4){
				int base = 180000;
				total = base*lamaMenginap;
			} else if(lamaMenginap >= 5){
				int base = 160000;
				total = base*lamaMenginap;
			}						
		}
		cout << "Total Harga		: Rp." << total << endl;				
		
		// mengulang program
		cout << "Ingin Memesan Lagi (y/n)? ";
		cin >> ulang;				
	}
	while(ulang == 'Y' || ulang == 'y');
}
