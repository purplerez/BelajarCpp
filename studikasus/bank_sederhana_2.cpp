#include <iostream>


using namespace std; 

// global array variabel untuk data nasabah
int id[20];
string nama[20];
int saldo[20];

int jml = 0; 

// abstraksi fungsi
void tambahNasabah(); 
void tampilNasabah();
void tambahSaldo(int nomor);
void saldoMax();
void sortAz();

int main() {
	char ulang; 
	int pilih; 
	int nomor;
	
	do {
		cout<<"---Aplikasi Tabungan---"<<endl; 
		cout<<"Pilih Menu"<<endl;
		cout<<"1. Tambah Nasabah Baru"<<endl;
		cout<<"2. Tampilkan data Nasabah"<<endl;
		cout<<"3. Setor Tabungan"<<endl;
		cout<<"4. Tarik Dana"<<endl;
		cout<<"5. Ubah Data Nasabah"<<endl;
		cout<<"6. Nasabah Prioritas"<<endl;
		cout<<"7. Urutkan Saldo Nasabah"<<endl;
		cout<<"Pilihe Menu (1 - 6): ";
		cin>>pilih; 
		
		switch (pilih) 
		{
			case 1 : {
//				cout<<"Tambah Nasabah Baru"<<endl;
				tambahNasabah();
				break;
			}
			case 2 : {
//				cout<<"Setor Tabungan"<<endl;
				tampilNasabah();
				break;
			}
			case 3 : {
				cout<<"--- Setor Tabungan ---"<<endl;
				cout<<"Inputkan Id Nasabah : ";
				cin>>nomor; // 1103
				
				tambahSaldo(nomor);  // argumen
				
				break;
			}
			case 4 : {
				cout<<"Ubah Data Nasabah";
				break;
			}
			case 5 : {
				cout<<"Nasabah Prioritas"<<endl;
				break;
			}
			case 6 : {
//				cout<<"Urutkan Saldo Nasabah"<<endl;
				saldoMax();
				break;
			}
			case 7 : {
//				cout<<"Tampilkan data Nasabah"<<endl;
				sortAz();
				break;
			}
			default : {
				cout<<" Bukan Menu, Silahkan Pilih Lagi "<<endl;
				break;
			}
		}
		
		cout<<"Ulangi Menu (Y / T ) ? ";
		cin>>ulang; 
	}while(ulang == 'y' || ulang ==  'Y');
	
	return 0;
}

//deklarasi function dan prosedur 
void tambahNasabah(){
	char baru; 
	
	do {
		cout<<"--- Tambah Data Nasabah ---"<<endl;
		cout<<"Id Nasabah : ";
		cin>>id[jml];
		cout<<"Nama Nasabah : ";
		cin>>nama[jml];
		saldo[jml] = 100000; 
		
		jml++;
		
		cout<<"------------------------------"<<endl;
		cout<<"Tambah Nasabah Baru (Y/T) ?";
		cin>>baru; 
	}while(baru == 'Y' || baru == 'y');
}

void tampilNasabah(){
	cout<<"Tampil Data Semua Data Nasabah"<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"|  ID	| 	Nama Nasabah 	| 		Saldo	| "<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	for(int i = 0; i < jml; i++){
		cout<<"|  "<<id[i]<<"|	 	"<<nama[i]<<" 	| 		"<<saldo[i]<<"	| "<<endl;		
	}
	cout<<"-----------------------------------------------------"<<endl;
}

void tambahSaldo(int nomor){  // parameter 
	int index, nabung; 
	char valid; 
	
	// syntax untuk input id nasabah
	
	for(int i = 0; i < jml; i++ ){
		if(id[i] == nomor) {  // array id[0-n]  == 1103
			index = i; 
		}
	}
	
	cout<<" -- Data Nasabah -- "<<endl;
	cout<<" Nama : "<<nama[index]<<endl;
	
	cout<<"Apakah Data Nasabah sudah benar (Y/T) ? ";
	cin>>valid; 
	
	if(valid == 'y' || valid == 'Y'){
		cout<<"Nominal Penyetoran : ";
		cin>>nabung; 
		
		/* 
		percabangan untuk menarik dana jika setelah saldo dikurangi nominal penarikan ternyata saldo kurang dari 25 ribu, 
		akan muncul notif bahwa saldo kurang
		
		jika saldo akhir setelah dikurang lebih besar dari 25 ribu, maka penarikan akan dilanjutkan. 		
		*/ 
		saldo[index] = saldo[index] + nabung; 
		cout<<"Saldo Berhasil Ditambahkan"<<endl;
	}
	
		cout<<"Saldo Saat Ini adalah Rp. "<<saldo[index];
}

void saldoMax(){
	int index, max = 0; 
	
	for(int i = 0; i < jml; i++){
		if(saldo[i] > max){
			max = saldo[i];
			index = i; 
		}
	}
	cout<<"Yang Memiliki saldo tertinggi adalah "<<nama[index]<<" Sebesar Rp. "<<saldo[index]<<endl;
}

// algoritma bubble sort
void sortAz(){
	for(int x = 0; x < jml-1; x++){
		for (int i = 0; i < jml-x-1; i++){
			if(saldo[i] > saldo[i+1]){
				
				int tempSaldo = saldo[i];
				saldo[i] = saldo[i+1];
				saldo[i+1] = tempSaldo; 
				
				int tempId = id[i];
				id[i] = id[i+1];
				id[i+1] = tempId;
				
				string tempNama = nama[i];
				nama[i] = nama[i+1];
				nama[i+1] = tempNama; 
			}
		}
	}
}
