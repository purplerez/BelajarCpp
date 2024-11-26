#include <iostream>
#include <vector>
using namespace std; 

int varC = 10; // deklarasi global variabel
// deklarasi prosedur cetak text 

// fungsi prototyping 
int tambahBil(int varA, int varB);
void cetaktext(string text, int jumlah);
void cetaktext(string text);


int main() {
	int total; 
	
	total = tambahBil(3,4);
	cout<<total<<endl;

	return 0;
}

int tambahBil(int varA, int varB){
//	int varC;  // lokal variable untuk fungsi tambahBil
	varC = varA + varB; 
	
	return varC; 
}

void cetaktext(string text, int jumlah)
{
	for(int i = 1; i <= jumlah; i++)
		cout<<text<<endl;
	varC+=5; 
}

void cetaktext(string text){
	cout<<text<<endl;
	varC+=10; 
}

