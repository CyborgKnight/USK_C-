#include <bits/stdc++.h>
using namespace std;

int a, b, c, i, j, temp, maxim, minim;
float jumlah, rata;
char ulang;

int main(){
	do {
		system("cls");
	cout << "Masukkan Tiga Buah Angka" << endl;
	cout << "Nilai A: ";
	cin >> a;
	cout << "Nilai B: ";
	cin >> b;
	cout << "Nilai C: ";
	cin >> c;
	
	cout << "=====================================================" << endl;
	
	int nilai[3] ={a, b, c};	
	for (i=0; i<3; i++){
		for (j=i+1; j<3; j++){
			if (nilai[i] > nilai[j]){
			temp = nilai[i];
			nilai[i] = nilai[j];
			nilai[j] = temp;
		    }
		}
	}	
	cout << "Urutan Nilai Ascending  : ";
	for (i=0; i<3; i++){
		cout << nilai [i] << " ";
	}
	cout << endl;
	
	for (i=0; i<3; i++){
		for (j=i+1; j<3; j++){
			if (nilai[i] < nilai[j]){
			temp = nilai[i];
			nilai[i] = nilai[j];
			nilai[j] = temp;
		    }
		}
	}	
	cout << "Urutan Nilai Descending : ";
	for (i=0; i<3; i++){
		cout << nilai [i] << " ";
	}
	cout << endl;		
	
	maxim	= nilai [0];
	minim	= nilai [2];	
	cout << "Nilai Max: " << maxim << endl;
	cout << "Nilai Min: " << minim << endl;		
	
	jumlah = a+b+c;
	cout << "Nilai Total: " << jumlah << endl;
	
	rata = jumlah/3;
	cout << "Nilai Rata-Rata: " << rata << endl;
	
	cout << "Ulang Program(y/n): ";
	cin >> ulang;
  } 
    while (ulang == 'Y' || ulang == 'y');
    
    return 0;
}
