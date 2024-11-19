#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 

int main() {
	int i;
	int tinggi; 
	int space;
	
//	    * * * * 
//	    * * *
//	    * * 
//	    * 
//	    *
//    * *
//  * * *
//* * * *

//	  * * * * 
//	  * * *
//	  * * 
//	  *

	cout<<"Inputkan Tinggi = ";
	cin>>tinggi; 
	
	space = tinggi - 1; 
	
	for(i = 1; i <= tinggi; i++){
		for(int j = 1; j <= space; j++) {
			cout<<" ";
		}
		for(int y = tinggi-(i-1); y >= 1; y--){
			cout<<"*";
		}
		cout<<endl;
	}

//	    *
//    * *
//  * * *
//* * * *
	for(int s = 1; s <= tinggi; s++){
		for(int j = space - (s-1); j >= 1; j--)
		{
			cout<<" ";
		}
		for(int y = 1; y <= s; y++){
			cout<<"*";
		}
		cout<<endl;
	}

	
//	struktur perulangan for
/*
	for(int i = 1; i<=10; i++){
		cout<<i<<endl;
	}
	
	cout<<"Nilai i sekarang adalah "<<i; 	
*/
//	struktur perulangan while
//	i = 1; 
//	
//	while(i <= 10)
//	{
//		cout<<i<<endl;
//		i++;
//	}
		
//	struktur perulangan do...while()
//	i = 1; 
//	do {
//		cout<<i<<endl;
//		i++;
//	}while(i<=10);
//	
	
	// memfilter inputan dengan menggunakan do..while.
	// inputan yang diperbolehkan hanya angka 10 - 100
	//	dan hanya kelipatan dari 10
//	int angka;
//	int var;
//	do{
//		cout<<"Hanya menerima inputan 10-100 dan kelipatan 10"<<endl;
//		cout<<"Masukkan sebuah angka = ";
//		cin>>angka; 
//		var = angka % 10;
//		cout<<var<<endl;
//		
//	} while((var != 0) || (angka < 10 || angka > 100 ) );
		
//	}while( (angka < 10 || angka > 100) );
	
//	cout<<"SELAMAT ANDA SUKSES MENGINPUTKAN "<<angka<<endl;

	

	return 0;
}
