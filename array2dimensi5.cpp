#include <iostream>
using namespace std;

int main(){
	int a[2][3]; // membuat array 2 dimensi
	
	//mengisi nilai ordo matrik 2x3
	for (int i=0; i<=1; i++){
		for (int j=0; j<=2; j++){
		cout << "Inputkan nilai index ke-["<<i<<"]["<<j<<"]: ";
		cin >> a[i][j];
		}
	}
	
	//menampilkan nilai ordo matrik 2x3
	for (int i=0; i<=1; i++){
		cout <<endl;
		for (int j=0; j<=2; j++){
			cout <<a[i][j] <<" ";
		}
	}
}