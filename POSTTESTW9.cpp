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
	char a[100];
	div_t xx;
	cout << "--------------------------\n";
	cout << "PROGRAM GENERATE PERMUTASI\n";
	cout << "--------------------------\n";
	
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
	cout << "Tekan Enter untuk melihat hasil generate.....";
	cin.ignore();
	cin.get();
	for(int i= 1; i <=n;i++){
		for(int j = i+1; j<=n;j++){
			if(a[i] > a[j]){
				char temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
//	Generate permutasi
	for(int x = 1; x<=max;x++){
		cout << no << ". ";
		for(int i = 1; i <= tr; i++){
			cout << a[i] << " ";
		}
		cout << endl;
		no++;
		int j = n - 1;
		while (j >= 1 && a[j] >= a[j+1])j--;
		if(j == 0) break;
		
		k = n;
		while(a[j] >= a[k])k--;
		
//		Tukar a[k] dan a[j]
		char temp = a[j];
		a[j] = a[k];
		a[k] = temp;
		
		s = n;
		r = j + 1;
		while (s > r){
			temp = a[s];
			a[s] = a[r];
			a[r] = temp;
			
			s--;
			r++;
		}
	}
	return 0;
}
