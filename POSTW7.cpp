#include<iostream>
using namespace std;

const int MAKS = 500;

class Operasi{
	public:
		void enkripsi();
		void dekripsi();
		void output();
	private:
		char chiper[MAKS];
		int key;
		char plain[MAKS];
		int panjang;
};
void Operasi::enkripsi();
	panjang = 0 ;
	while(chiper[panjang] != '\0'){
		panjang++;
	}
	for(int i = 0; i < panjang;i++){
		chiper[i] = ( chiper[i] + key ) % 128;
	}
}
void Operasi::dekripsi(){
	for(int i = 0 ; i < panjang; i++){
		plain[i] = (chiper[i] - key + 128 ) % 128;
		chiper[i] = plain[i];
	}
}
void Operasi::output() {
	for(int i = 0; i < panjang; i++){
		cout << chiper[i];
	}
}
void Operasi::prima(){
		bool isPrime = true;
				int x;
				cout << "PROGRAM UNTUK MEMERIKSA BILANGAN PRIMA" << endl << endl;
			    cout << "Masukkan bilangan untuk dicek: ";
			    cin >> x;
		if (x < 2) {
            isPrime = false;
        } else {
        	//menentukan apakah bilangan tersebut prima atau bukan
            for (a = 2; a <= x / 2; ++a) {
                if (x % a == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            cout << x << " merupakan bilangan prima." << endl;
        } else {
            cout << x << " bukan merupakan bilangan prima" << endl;
        } 
}

int main(){
	Operasi op;
	int pilih;
	char ulang;
	do{
		cout << "=== MENU PROGRAM ===" << endl;
		cout << "1. Cek Bilangan Prima"<< endl;
		cout << "2. Enkripsi dan Dekripsi" << endl;
		cout << "Pilih menu: ";
		cin >> pilih
		
		switch(pilih){
			case 1:
				op.prima();
				break;
			case 2:
					cout << "Masukkan kata : ";
					cin.getline(chiper,MAKS);
					cout << "Masukkan key : ";
					cin >> key;
					cin.ignore();
				cout << "Setelah di Enkripsi: ";
				op.Enkripsi();
				cout << endl;
				op.dekripsi();
				cout << "Kembali di Dekripsi: ";
				en.output();
				break;
			default;
			cout << "Pilihan tidak valid" << endl;
			
		}
		cout << "Ulangi? (y/n) : ";
		cin >> ulang;
		
	} while(ulang == 'y' && ulang == 'Y');

	
	return 0;
