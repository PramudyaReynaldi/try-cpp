#include <iostream>
using namespace std;

int main()
{
	int a, t;
	float luas;
	
	cout << "================================\n";
	cout << "PROGRAM MENGHITUNG LUAS SEGITIGA\n";
	cout << "================================\n";
	
	cout << "Masukan alas segitiga = ";
	cin >> a;
	cout << "Masukan tinggi segitiga = ";
	cin >> t;
	
	luas = 0.5 * a * t;
	
	cout << "Luas segitiga adalah = "<< luas << endl;
	
	return 0;
}