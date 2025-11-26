#include <iostream>
#include <string>

using namespace std; 

int tinggi[5];
string nama[5];

// fungsi prototyping 
void inputdata();
void viewdata();
void viewsatu(int no);
void editdata();
void reset();

int main() {
	int pilih; 
	char tanya; 

	
	do{
		do{
			cout<<"Pilih Menu dibawah ini "<<endl;
			cout<<"1. Input Data"<<endl;
			cout<<"2. Menampilkan semua data"<<endl;
			cout<<"3. Mencari siswa"<<endl;
			cout<<"4. Merubah data"<<endl;
			cout<<"5. Mereset Semua data"<<endl;
			cout<<"Silahkan Masukkan Pilihan: ";
			cin>>pilih;
		}while(pilih < 1 || pilih > 5);
		
		if(pilih == 1)
		{
			inputdata();
		}
		else if(pilih == 2)
		{
			viewdata();
		}
		else if(pilih == 3)
		{
			int no; 
			cout<<"Inputkan no siswa: ";
			cin>>no; 
			no--;
			viewsatu(no);
		}
		else if(pilih == 4)
		{
			editdata();
		}
		else {
			reset();
		}
			
		cout<<"Apakah akan mengulangi kembali ke main menu ? (Y/T) ";
		cin>>tanya;
	}while(tanya == 'y' || tanya == 'Y');
}

void inputdata(){
	for(int i = 0; i < 5; i++)
	{
		cout<<"Siswa ke-"<<i+1<<endl;
		cout<<"Inputkan Nama: ";
		cin>>nama[i];
		cout<<"Inputkan Tinggi Badan: ";
		cin>>tinggi[i];
		cout<<endl;
	}
}

void viewdata(){
	for(int i = 0; i < 5; i++)
	{
		cout<<"Siswa ke-"<<i+1<<endl;
		cout<<"Nama: "<<nama[i]<<endl;
		cout<<"Tinggi Badan: "<< tinggi[i]<<endl;
		cout<<endl;
	}
}

void viewsatu(int no){
	cout<<"Siswa: "<<nama[no]<<endl;
	cout<<"Tinggi: "<<tinggi[no]<<endl;
}

void editdata(){
	int no; 

	cout<<"Masukkan no. siswa: ";
	cin>>no;
	no--;
	cout<<"Nama siswa :"<<nama[no]<<endl;
	cout<<"Tinggi siswa :"<< tinggi[no]<<endl;
	cout<<"--Rubah Data siswa--"<<endl;
	cout<<"Inputkan Nama: ";
	cin>>nama[no];
	cout<<"Inputkan Tinggi Badan: ";
	cin>>tinggi[no];
}

void reset(){
	for(int i = 0; i < 5; i++)
	{
		nama[i] = "";
		tinggi[i] = 0;
	}
}
