#include <iostream>
#include <vector>
using namespace std; 

int varC = 10; // deklarasi global variabel
// deklarasi prosedur cetak text 
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

int tambahBil(int varA, int varB){
//	int varC;  // lokal variable untuk fungsi tambahBil
	varC = varA + varB; 
	
	return varC; 
}

vector<int> tambah(int a, int b, int c, int d)
{
		int e, f; 
		e = a + b; 
		f = c + d;
		return {e, f};
}
int main() {
//	int a, b, c; // lokal main
	
	vector<int> a = tambah(1,2,3,4);
	
//	cout<<a[0]<<","<<a[1];
	for (int i = 0; i<=1; i++)
	{
		cout<<a[i]<<endl;	
	}	
//	
//	varC++; // 11
//	
//	cetaktext("X PPLG 1"); // 11 + 10
//	
////	cetaktext("One Piece", 10);
//	
//	cout<<varC; 
	return 0;
}
