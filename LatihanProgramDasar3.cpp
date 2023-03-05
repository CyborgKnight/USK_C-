#include <bits/stdc++.h>
using namespace std;

int a, b, c, i, j, temp, maxim, minim;
float jumlah, rata;

int main(){
	cout << "Masukkan Tiga Buah Nilai" << endl;
	cout << "Nilai A: ";
	cin >> a;
	cout << "Nilai B: ";
	cin >> b;
	cout << "Nilai C: ";
	cin >> c;
	
	int nilai[3] = {a, b, c};
	
	// nilai ascending
	for(i=0; i<3; i++){
		for(j=i+1; j<3; j++){
			if(nilai[i] > nilai[j]){
				temp = nilai[i];
				nilai[i] = nilai[j];
				nilai[j] = temp;
			}
		}
	}	
	cout <<"\nUrutan Nilai Ascending\t: ";
	for(i=0; i<3; i++){
		cout << nilai[i] << " ";
	}
	cout << endl;
	
	// nilai descending
	for(i=0; i<3; i++){
		for(j=i+1; j<3; j++){
			if(nilai[i] < nilai[j]){
				temp = nilai[i];
				nilai[i] = nilai[j];
				nilai[j] = temp;
			}
		}
	}	
	cout <<"Urutan Nilai Descending\t: ";
	for(i=0; i<3; i++){
		cout << nilai[i] << " ";
	}
	cout << endl;
	
	//nilai max dan nilai min
	maxim = nilai[0];
	minim = nilai[2];	
	cout << "Nilai MAX: " << maxim << endl;
	cout << "Nilai MIN: " << minim << endl;
	
	// nilai rata-rata
	jumlah = a + b + c;
	rata   = (jumlah/3);
	cout << "Nilai RATA-RATA: " << rata << endl;
	
	// nilai total
	cout << "Nilai TOTAL: " << jumlah << endl;
}
