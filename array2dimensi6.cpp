#include <iostream>
using namespace std;

int main(){
	int a[2][3]; //membuat ordo matrik 2x3
	int b[2][3]; //membuat ordo matrik 3x3
	
	//mengisi nilai matrik A
	cout <<"inputkan nilai matrik A" <<endl;
	for (int i=0; i<=1; i++){
		for (int j=0; j<=2; j++){
			cout <<"Inputkan nilai index ke-["<<i<<"]["<<j<<"]: ";
			cin >>a[i][j];
		}
	}
	
	//mengisi nilai matrik B
	cout <<"\nInputkan nilai matrik B" <<endl;
	for (int i=0; i<=1; i++){
		for (int j=0; j<=2; j++){
			cout <<"Inputkan nilai index ke-["<<i<<"]["<<j<<"]: ";
			cin >>b[i][j];
		}
	}
	
	//menampilkan nilai matrik A
	cout <<"\n\nNilai matrik A";
	for (int i=0; i<=1; i++){
		cout <<endl;
		for (int j=0; j<=2; j++){
			cout <<a[i][j] <<" "; 
		}
	}
	
	//menampilkan nilai matrik B
	cout <<"\n\nNilai matrik B";
	for (int i=0; i<=1; i++){
		cout <<endl;
		for (int j=0; j<=2; j++){
			cout <<a[i][j] <<" "; 
		}
	}
	
	//menampilkan penjumlahan matrik A+B
	cout <<"\n\nHasil penjumlahan matrik A+B";
	for(int i=0; i<=1; i++){
		cout <<endl;
		for (int j=0; j<=2; j++){
			cout <<a[1][j]+b[i][j] <<" ";
		}
	}
}