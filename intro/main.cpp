#include <iostream>

using namespace std; 


int main() {
	// part deklarasi / declare
	int jari; 
	float luas; 
	
	// part output
	cout<<"Inputkan Jari - Jari = ";
	
	// part input
	cin>>jari; 
	
	// part assign 
	luas = 3.14 * (jari*jari);
	
	// part output
	cout<<"Luas lingkaran dengan jari - jari "<<jari<<" Adalah "<<luas<<endl; 
	
	
	return 0;
}
