#include <iostream>
#include <vector>

using namespace std;

/*
Program untuk menghitung barang belanjaan
sekaligus disimpan dan dapat diakses jika kasir menginginkannya
*/


int main() {
	int cust = 1, harga, jml,akses,jumlah;
	string barang;
	vector<int> price;
	vector<string> stuff;
	
	cout<<"\t\tToko Annelies\n\t    jl. Harga Diri No. 1"<<endl;
	cout<<endl;
	cout<<"Pilih operasi :\n1.Hitung Harga barang\n2.Akses Data yang Tersimpan "<<endl; cin>>akses;
if(akses==1) {
	cout<<"No : "<<cust<<endl;
	cout<<"Jumlah barang : "; cin>>jml;
	while(jml>0){
		cout<<endl;
		cin.ignore();
		cout<<"Nama barang : "; getline(cin, barang);
		cout<<"Harga : Rp. "; cin>>harga;
		cout<<endl;
		//cout<<barang<<"  "<<harga<<endl;
		price.push_back(harga);
		stuff.push_back(barang);
		jml--;
		}
	
		cout<<"\nBarang\t\t\tHarga"<<endl;
		for(int i = 0; i < price.size(); i++) {
			cout<<stuff[i]<<"\t\t"<<price[i]<<endl;
			jumlah+=price[i];
		}
		cout<<"Total : "<<jumlah;
	}
	
	
}
