#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int hasil;

int faktorial(int nilai){
	int hasil = 1;
	for(int i = 1;i <=nilai;i++){
		hasil *= i;
	}
	return hasil;
}
int main(){
	int p, nq, max, x, i, j, n, k, r, s, tr, no = 1;
	int a[100];
	div_t xx;
	cout << "--------------------------\n";
	cout << "PROGRAM GENERATE PERMUTASI\n\n";
	
	cout << "Masukkan nilai n: ";
	cin >> n;
	for(i = 1;i <= n;i++){
		cout << "Masukkan nilai himpunan a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nilai r: ";
	cin >> tr;
	p = faktorial(n);
	nq= faktorial(n - tr);
	if ( nq == 0) nq = 1;
	max = p / nq;
	
	cout << "Nilai permutasi: " << max << endl;
	getch();
	return 0;
}
