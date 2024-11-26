#include <iostream>

using namespace std; 
int count = 0; 
int saldo[10]; 
string nasabah[10]; 
string pass[10];
int main() {
	int pilih, valid = 0;
	do {
		cout<<"Pilih Menu : "<<endl;
		cout<<"1. Login"<<endl;
		cout<<"2. Registrasi"<<endl;
		cout<<"Pilih 1 / 2 ";
		cin>>pilih; 
		switch (pilih) {
			case 1 : {
				string user; 
				string passw; 
				
				cout<<"Inputkan user =";
				cin>>user;
				cout<<"Inputkan Pass =";
				cin>>passw; 
				
				for(int i = 0; i < count; i++){					
					if((nasabah[i] == user) && (pass[i] == passw)) {
						cout<<"SELAMAT DATANG "<<nasabah[i]<<endl;
						valid = 1;
					}
				}
				break;
			}
			case 2 : 
			{
				cout<<"Inputkan user =";
				cin>>nasabah[count];
				cout<<"Inputkan Pass =";
				cin>>pass[count]; 
				
				count++;
				break; 
			}
		}
	}while(valid != 1);
	
	cout<<"Di Aplikasi Bank PPLG";
	return 0;
}
