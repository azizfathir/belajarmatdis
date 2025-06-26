#include<iostream>
using namespace std;

const int MAKS = 500;

class Enkripsi{
	public:
		Enkripsi();
		void dekripsi();
		void output();
	private:
		char chiper[MAKS];
		int key;
		char plain[MAKS];
		int panjang;
};
Enkripsi::Enkripsi(){
	cout << "Masukkan kata : ";
	cin.getline(chiper,MAKS);
	cout << "Masukkan key : ";
	cin >> key;
	cin.ignore();
	
	panjang = 0 ;
	while(chiper[panjang] != '\0'){
		panjang++;
	}
	for(int i = 0; i < panjang;i++){
		chiper[i] = ( chiper[i] + key ) % 128;
	}
}
void Enkripsi::dekripsi(){
	for(int i = 0 ; i < panjang; i++){
		plain[i] = (chiper[i] - key + 128 ) % 128;
		chiper[i] = plain[i];
	}
}
void Enkripsi::output() {
	for(int i = 0; i < panjang; i++){
		cout << chiper[i];
	}
}

int main(){
	Enkripsi en;
	cout << "Setelah di Enkripsi: ";
	en.output();
	cout << endl;
	en.dekripsi();
	cout << "Kembali di Dekripsi: ";
	en.output();
	
	return 0;
}
