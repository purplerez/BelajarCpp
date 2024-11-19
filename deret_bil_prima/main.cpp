#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main() {
	int faktorial, angka; 
	
	cout<<"Program Menampilkan deret Bilangan Prima"<<endl;
	cout<<"Inputkan Angka dan program akan menampilkan deret bilangan prima mulai 1 - angka yang kamu inputkan"<<endl;
	do {
	
	cout<<"Angka Harus Lebih besar dari 1"<<endl;
	cout<<"Angka = ";
	cin>>angka;
	
	}while(angka <= 1);
	
	cout<<"Deret Bilangan Prima"<<endl;
	
	for(int i = 1; i <= angka; i++){
		faktorial = 0;
		for(int j = 1; j<=i; j++)
		{
			if(i%j == 0) faktorial++;
		}
		
		if(faktorial == 2) 
			cout<<i<<endl;
	}
	return 0;
}
