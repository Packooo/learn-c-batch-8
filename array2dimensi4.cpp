#include <iostream>
using namespace std;

int main(){
	int a[2][5]; // membuat array 2 dimensi
	
	//mengisi array 2 dimensi
	for (int i=0; i<=1; i++){
		for (int j=0; j<=2; j++){
		cout << "Inputkan nilai index ke-["<<i<<"]["<<j<<"]: ";
		cin >> a[i][j];
		}
	}
	
	//menampilkan nilai array 2 dimensi
	for (int i=0; i<=1; i++){
		for (int j=0; j<=2; j++){
			cout << "Nilai index ke -["<<i<<"]["<<j<<"]: "<<a[i][j] <<endl;
		}
	}
}