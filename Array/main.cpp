#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 

// Variabel global arr
int arr[10] = { 10, 40, 12, 35, 20, 11, 21, 90, 60, 75};

void urutkan(); 
void cetak_array();
void input();
void swap(int &a, int &b);
void n();

int main() {
	input();
	cout<<"Sebelum Di urutkan";
	n();
	cetak_array();
	n();
	urutkan();
	cout<<"Setelah Di urutkan";
	n();
	cetak_array();
	
	return 0;
}
void n(){
	cout<<endl;
}

void urutkan(){
	for(int i = 0; i<9; i++){
		for(int j = 0; j< 9-i; j++)
		{
			if(arr[j] > arr[j+1]) 
			{
				swap(arr[j], arr[j+1]);
			}
		}					
	}
}

void swap(int &a, int &b){
	int x; 
	
	x = a; 
	a = b; 
	b = x;
}

void input(){
	for(int i =0; i<10; i++){
		cout<<"Inputkan data ke -"<<i<<" = ";
		cin>>arr[i] ;
	}
}

void cetak_array(){
	for(int i = 0; i< 10; i++){
		cout<<arr[i]<<", ";
	}
}
