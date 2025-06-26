#include<iostream>
#include<cstdlib>
using namespace std;

class Madis{
	public:
		void pilih();
		void kombinasi();
		void  permutasi();
	private:
		int fak(int x);
		int hitungPermutasi(int n, int r);
		int hitungKombinasi(int n, int r);
};


int Madis::hitungPermutasi(int n, int r){
	return fak(n) / fak(n-r);
}
int Madis::hitungKombinasi(int n, int r){
	return fak(n) / (fak(r) * (fak(n-r)));
}
int Madis::fak(int x){
	int hasil = 1;
	for(int i = 1; i <= x;i++){
		hasil = hasil * i;
	}
	return hasil;
}
void Madis::permutasi(){
	int n,r, N,R,P;
	cout << "Masukkan nilai n: ";
	cin >> n;
	cout << "Masukkan nilai r: ";
	cin >> r;
	if(r > n){
		cout << "Nilai r harus kurang dari atau sama dengan nilai n." << endl;
		pilih();
		return;
	}
	cout << "Maka hasil permutasi P ( " << n << ", " << r << " ): " << hitungPermutasi(n,r) << endl;
	pilih();	
}
void Madis::kombinasi(){
	int n,r, p, N,R,P;
	cout << "Masukkan nilai n: ";
	cin >> n;
	cout << "Masukkan nilai r: ";
	cin >> r;
	if(r > n){
		cout << "Nilai r harus kurang dari atau sama dengan nilai n." << endl;
		pilih();
		return;
	}
	cout << "Maka hasil Kombinasi P ( " << n << ", " << r << " ): " << hitungKombinasi(n,r) << endl;
	pilih();
}
void Madis::pilih(){
	int n;
	cout << "1. Permutasi" << endl;
	cout << "2. Kombinasi" << endl;
	cout << "Pilihan Anda: ";
	cin >> n;
	
	if( n == 1)
	permutasi();
	else if(n == 2)
	kombinasi();
	else
	cout << "\n\n***Selesai***\n\n"; 
}
int main(){
	Madis z;
	z.pilih();
	
	system("PAUSE");
	return EXIT_SUCCESS;
}

