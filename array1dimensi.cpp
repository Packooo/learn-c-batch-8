#include <iostream>
using namespace std;

int main(){
	//membuat array 3 dimensi kosong
	int a[2][3][4];
	
	//mengisi nilai array 3 dimensi
	a[0][0][0] = 1; a[1][0][0] = 13;
	a[0][0][1] = 2; a[1][0][1] = 14;
	a[0][0][2] = 3; a[1][0][2] = 15;
	a[0][0][3] = 4; a[1][0][3] = 16;
	a[0][1][0] = 5; a[1][1][0] = 17;
	a[0][1][1] = 6; a[1][1][1] = 18;
	a[0][1][2] = 7; a[1][1][2] = 19;
	a[0][1][3] = 8; a[1][1][3] = 20;
	a[0][2][0] = 9; a[1][2][0] = 21;
	a[0][2][1] = 10; a[1][2][1] = 23;
	a[0][2][2] = 11; a[1][2][2] = 24;
	a[0][2][3] = 12; a[1][2][3] = 25;
	
	//mencetak salah satu isi array
	cout << "Nilai index ke- [1][2][3]: " << a[1][2][3];
}