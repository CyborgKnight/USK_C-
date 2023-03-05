#include <bits/stdc++.h>
using namespace std;

int a, b, c, i, j, temp, maxim, minim;
float jumlah, rata;

int main(){
	cout << "Masukan Tiga Buah Nilai" << endl;
	cout << "Nilai A: ";
	cin >> a;
	cout << "Nilai B: ";
	cin >> b;
	cout << "Nilai C: ";
	cin >> c;
	
	// menghitung nilai ascending dan descending
	int nilai[3] = {a, b, c};
	// ascending
	for(i=0; i<3; i++){
		for(j=i+1; j<3; j++){
			if(nilai[i] > nilai[j]){
				temp = nilai[i];
				nilai[i] = nilai[j];
				nilai[j] = temp;
			}
		}
	}
	cout << "Urutan Nilai Ascending  : ";
	for (i=0; i<3; i++){
		cout << nilai[i] << " ";
	}
	cout << endl;
	
	// descending
	for(i=0; i<3; i++){
		for(j=i+1; j<3; j++){
			if(nilai[i] < nilai[j]){
				temp = nilai[i];
				nilai[i] = nilai[j];
				nilai[j] = temp;
			}
		}
	}
	cout << "Urutan Nilai Descending : ";
	for (i=0; i<3; i++){
		cout << nilai[i] << " ";
	}
	cout << endl;
	
	// nilai max dan min
	maxim = nilai[0];
	minim = nilai[2];
	
	cout << "Nilai Max: " << maxim << endl;
	cout << "Nilai Min: " << minim << endl;
	
	// nilai rata-rata
	jumlah = a+b+c;
	rata = (jumlah/3);
	cout << "Nilai Rata-Rata: " << rata << endl;
}
