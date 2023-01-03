#include <iostream>
using namespace std;

int main()
{
	float l, r; // l = luas lingkaran , r = jari - jari lingkaran
	const float phi = 3.14;
	
	cout << "====================================\n";
	cout << "MENGHITUNG LUAS LINGKARAN\n";
	cout << "====================================\n\n";
	
	cout << "Masukan panjang jari - jari lingkaran = ";
	cin >> r; // untuk input nilai jari - jari lingkaran
	
	l = phi * r * r; // rumus luas lingkaran
	
	cout << "Luas lingkaran adalah = "<< l << endl;
	cout << endl;
	
	printf ("<><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
	printf ("\tNAMA\t: PRAMUDYA REYNALDI SALIM\n");
	printf ("\tNIM\t: 211011450389\n");
	printf ("\tKELAS\t: 02TPLE004\n");
	printf ("<><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\n");
	
	return 0;
	

}