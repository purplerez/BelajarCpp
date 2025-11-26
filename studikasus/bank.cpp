#include <iostream>

using namespace std; 

// deklarasi global variabel Array 
int id[50];
string nasabah[50];
int saldo[50];

int jmlNasabah = 0; 

// deklarasi prosedur
void tambahNasabah(){
	char ulang; 
	
	do{
		cout<<"--Data Nasabah Baru--"<<endl;
		cout<<"Masukkan ID Nasabah : ";
		cin>>id[jmlNasabah];
		cout<<"Masukkan Nama Nasabah : ";
		cin>>nasabah[jmlNasabah];
		saldo[jmlNasabah] = 100000;
		
		jmlNasabah++;
		
		cout<<"---------------------------"<<endl;
		cout<<"Mau Menambahkan Nasabah Lain (Y/T) ? ";
		cin>>ulang;
	}while(ulang == 'y' || ulang == 'Y');
}

void tampilNasabah(){
	cout<<"-------------------------------------------------"<<endl;
	cout<<"|  ID	|    Nama Nasabah	| 	Saldo          "<<endl;
	cout<<"-------------------------------------------------"<<endl;
	for(int i = 0; i < jmlNasabah; i++){
		cout<<"|  "<<id[i]<<"	|    "<<nasabah[i]<<"	| 	Rp. "<<saldo[i]<<"      |   "<<endl;
	}
	cout<<"-------------------------------------------------"<<endl;
}

void tambahSaldo(int nomor){
	int index, nabung; 
	char validasi; 
		
	for(int i = 0; i < jmlNasabah; i++ ){
		if(id[i] == nomor ) {
			index = i; 
		}
	}
	
	cout<<"--Data Nasabah--"<<endl;
	cout<<"Nama : "<<nasabah[index]<<endl;
	
	cout<<"Apakah Datanya Benar (Y/T) ? ";
	cin>>validasi; 
	
	if(validasi == 'y' || validasi == 'Y'){
		cout<<"Nominal Penyetoran :  ";
		cin>>nabung; 
		saldo[index] = saldo[index] + nabung;
		cout<<"Saldo Berhasil ditambahkan"<<endl;
	}
	cout<<"Saldo saat ini"<<saldo[index]<<endl;
}

void ubahData(int nomor){
	int index; 
	char validasi; 
//	string namaNew;
		
	for(int i = 0; i < jmlNasabah; i++ ){
		if(id[i] == nomor ) {
			index = i; 
		}
	}
	
	cout<<"--Data Nasabah--"<<endl;
	cout<<"Nama : "<<nasabah[index]<<endl;
	
	cout<<"Apakah Datanya Benar (Y/T) ? ";
	cin>>validasi; 
	
	if(validasi == 'y' || validasi == 'Y'){
		cout<<"Nama Baru : ";
		cin>>nasabah[index];	
	}
}

void saldoMax(){
	int index, max = 0;
	for(int i = 0; i < jmlNasabah; i++){
		if(saldo[i] > max )	{
			max = saldo[i];
			index = i;
		}
	}
	cout<<endl;
	cout<<"Yang Memiliki Saldo terbesar adalah "<<nasabah[index]<<" dengan saldo sebesar Rp. "<<saldo[index]<<endl;
}

// algoritma sorting dengan bubble sort
void sortAz(){
	for (int x = 0; x < jmlNasabah-1; x++){
		for (int i = 0; i < jmlNasabah - x - 1; i++ )
		{
			if(saldo[i] > saldo[i+1]){
				
				int tempSaldo = saldo[i];
				saldo[i] = saldo[i+1];
				saldo[i+1] = tempSaldo; 
				
				int tempId = id[i];
				id[i] = id[i+1];
				id[i+1] = tempId;
				
				string tempNas = nasabah[i];
				nasabah[i] = nasabah[i+1];
				nasabah[i+1] = tempNas;
			}
		}
	}
}

int main() {
	// main program
	
	char tanya; 
	int menu; 
	int id; 
	
	do {
		
		cout<<"Pilih Menu Berikut : "<<endl;
		cout<<"1. Tambah Nasabah "<<endl;
		cout<<"2. Tampilkan Nasabah"<<endl;
		cout<<"3. Penyetoran"<<endl;
		cout<<"4. Penarikan"<<endl;
		cout<<"5. Perubahan data nasabah"<<endl;
		cout<<"6. Saldo Tertinggi"<<endl;
		cout<<"Pilih Menu : ";
		cin>>menu;
		
		switch(menu) {
			case 1: {
				tambahNasabah();
				break;
			}
			case 2:{
				tampilNasabah();
				break;
			}
			case 3:{
				cout<<"-- Penyetoran  --"<<endl;
				cout<<"Masukkan ID Nasabah : ";
				cin>>id; 
				tambahSaldo(id);
				break;
			}
			case 4:{
				sortAz();
				break;
			}
			case 5:{
				cout<<"-- Rubah Data Nasabah  --"<<endl;
				cout<<"Masukkan ID Nasabah : ";
				cin>>id; 
				ubahData(id);
				break;
			}
			case 6:{
				saldoMax();
				break;
			}
			default : {
				cout<<"tidak termasuk dalam menu ";
				break;
			}
		}
		
		cout<<endl;
		cout<<"akan mengulangi ? ( Y / T )";
		cin>>tanya; 
		
		
	}while(tanya == 'Y' || tanya == 'y');

}

