#include<iostream>
using namespace std;

int hitungKPK(int a,int b){
	int c = (a > b) ? a : b;
	while(true){
		if (c % a == 0 && c % b == 0){
			return c;
		}
		c++;
	}
}

int hitungFPB(int a, int b){
	return (b == 0) ? a : hitungFPB(b, a % b);
}

int main(){
	int a, b, pilihan;
	cout << "Pilih Menu: " << endl;
	cout << "1. Menentukan KPK" << endl;
	cout << "2. Menentukan FPB" << endl;
	cout << "3. Keluar" << endl;
	cout << "Pilihan Anda: ";
	cin >> pilihan;
	cout << "-----------------" << endl;
	switch(pilihan){
		case 1:{
			cout << "Masukkan bilangan pertama: ";
			cin >> a;
			cout << "Masukkan bilangan kedua: ";
			cin >> b;
			int kpk = hitungKPK(a,b);
			cout << "KPK dari " << a << " dan " << b << " adalah: " << kpk << endl;
			break;
		}
		case 2:{
			
			cout << "Masukkan bilangan pertama: ";
			cin >> a;
			cout << "Masukkan bilangan kedua: ";
			cin >> b;
			int fpb = hitungFPB(a,b);
			cout << "FPB dari " << a << " dan " << b << " adalah: " << fpb << endl;
			break;
		}
		case 3:
			cout << "Terimakasih!" << endl;
		default:
			break;
	}
	
	return 0;
}
