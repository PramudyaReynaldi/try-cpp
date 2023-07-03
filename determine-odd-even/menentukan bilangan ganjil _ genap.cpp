#include <iostream>
using namespace std;

int main (){
	
	int bilangan;
	
	cout << "Masukan bilangan : ";
	cin >> bilangan;
	
	if (bilangan == (bilangan/2)*2){
		cout << "Maka "<< bilangan << "adalah bilangan genap" << endl;
	}
	else{
		cout << "Maka "<< bilangan << "adalah bilangan ganjil" << endl;	
	}
	
}