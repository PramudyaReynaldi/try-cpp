#include <iostream>

using namespace std;

int main ()
{
	cout << "=====================\n";
	cout << "PROGRAM KONVERSI SUHU\n";
	cout << "=====================\n";
	cout << endl;
	
	float C, F, R; //Note : C = Celcius, F = Fahrenheit, R = Reamur
	
	cout << "Input suhu celcius = ";
	cin >> C;
	cout << endl;
	
	F = (9/5 * C) + 32;
	R = (4/9 * C) + 32;
	
	cout << C << " Derajat Celcius = "<< F << " Derajat Fahrenheit";
	cout << endl;
	cout << C << " Derajat Celcius = "<< R << " Derajat Reamur";
	cout << endl;
	
	return 0;
}