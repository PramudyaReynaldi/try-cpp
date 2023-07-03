#include <iostream>
using namespace std;

int main (){
	
	int bilangan, I, B, A;
	
	cout << "===================================================\n";
	cout << "PROGRAM KONVERSI BILANGAN DESIMAL KE BILANGAN BINER\n";
	cout << "===================================================\n";
	
	cout << "Masukan bilangan : ";
	cin >> bilangan;
	
	B = 128;
	
	for (I=1; I<=8; I++){
		if (bilangan >= B){
			bilangan = bilangan - B;
			A = 1;
		}
		else{
			A = 0;
		}
		cout << A;
		B = B/2;
	}
}