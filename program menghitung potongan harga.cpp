#include <iostream>

using namespace std;

int main(){

    cout << "================================="<<endl;
    cout << "PROGRAM MENGHITUNG POTONGAN HARGA"<<endl;
    cout << "================================="<<endl;
    cout << endl;

    int harga_barang, jumlah_barang, total_bayar, diskon_pertama, diskon_kedua;

    cout << "Harga Barang = Rp.";
    cin >> harga_barang;
    cout << endl;

    cout << "Jumlah Barang = ";
    cin >> jumlah_barang;
    cout << endl;

    total_bayar = harga_barang * jumlah_barang;
    diskon_pertama = 0.15 * total_bayar;
    diskon_kedua = 0.05 * total_bayar;

    if(jumlah_barang > 100){
        total_bayar = total_bayar - diskon_pertama;
        cout <<"Anda Mendapatkan Diskon 15%"<<endl;
        cout <<"Harga Beli = Rp."<<total_bayar<<endl;
    }
    else{
        total_bayar = total_bayar - diskon_kedua;
        cout <<"Anda Mendapatkan Diskon 5%"<<endl;
        cout <<"Harga Beli = Rp."<<total_bayar<<endl;

        return 0;

    }

}