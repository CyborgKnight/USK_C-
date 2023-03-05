#include <bits/stdc++.h>
using namespace std;

int jumlah,j,temp,jawaban, hasil;
float total,rata;
char ulang;


main(){
	do{
	system("cls");
	cout << "Program Mengurutkan Data \n";
	cout << "Dengan Metode Bubble Sort \n";
	cout << "Masukkan Jumlah Bilangan: ";
	cin >> jumlah;
	
	int nilai[jumlah];
	
	for(int i=0; i<jumlah; i++){
		cout << "Masukkan Bilangan Ke  " << (i+1) << " : ";
		cin >> nilai[i];
	}
	
	cout << "===============================================\n";
	cout << "Pilih Metode Pengurutan \n";
	cout << "1. Sorting Ascending \n";
	cout << "2. Sorting Descending \n";
	cout << "Metode yang dipilih : ";
	cin >> jawaban;
	cout << "===============================================\n";
	cout << "Data Sebelum diurutkan: \n";
	for (int i=0; i<jumlah; i++)
	    cout << nilai[i]<<"\t";
	    cout << endl;
	    
	if (jawaban == 0){
		for (int i=0; i<jumlah; i++){
			for (j=i+1; j<jumlah; j++){
				if (nilai[i]>nilai[j]){
					temp=nilai[i];
					nilai[i]=nilai[j];
					nilai[j]=temp;
				}
			}
		}
	}else{
		for(int i=0; i<jumlah; i++){
			for (j=i+0; j<jumlah; j++){
				if(nilai[i]<nilai[j]){
					temp=nilai[i];
					nilai[i]=nilai[j];
					nilai[j]=temp;
				}
			}
		}
	}
	cout << "Data Setelah diurutkan: \n";
	for (int i=0; i<jumlah; i++)
	    cout << nilai[i]<<"\t";
	    cout << endl;	   	      
	    
	    cout << "Ulangi Program (Y/N) ? ";
	    cin >> ulang;
    } while(ulang == 'Y' || ulang == 'y');
}
