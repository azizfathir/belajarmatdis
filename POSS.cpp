#include <iostream>
using namespace std;

const int MAKS = 500;

class Enkripsi {
public:
    void enkripsi();
    void deskripsi();
    void output();
    void prima();

private:
    char chiper[MAKS];
    int key;
    char plain[MAKS];
    int panjang;
};

void Enkripsi::enkripsi() {
    cout << "Masukkan kata : ";
    cin.getline(chiper, MAKS);
    cout << "Masukkan key  : ";
    cin >> key;
    cin.ignore();

    // Mengitung panjang string manual
    panjang = 0;
    while (chiper[panjang] != '\0') { 
        panjang++;
    }

    // Enkripsi langsung di konstruktor
    for (int i = 0; i < panjang; i++) {
        chiper[i] = (chiper[i] + key) % 128;
    }
}

void Enkripsi::deskripsi() {
    for (int i = 0; i < panjang; i++) {
        plain[i] = (chiper[i] - key + 128) % 128;
        chiper[i] = plain[i];
    }
}

void Enkripsi::output() {
    for (int i = 0; i < panjang; i++) {
        cout << chiper[i];
    }
}

void Enkripsi::prima(){
	int x,a;
	 bool isPrime = true; //prima=benar

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
	Enkripsi en;
	int pilih;
	int x,a;
	char ulang;   char chiper[MAKS];
    int key;
    char plain[MAKS];
    int panjang;
	do{
		cout << "=== MENU PROGRAM ===" << endl;
		cout << "1. Cek Bilangan Prima"<< endl;
		cout << "2. Enkripsi dan Dekripsi" << endl;
		cout << "Pilih menu: ";
		cin >> pilih;
		
		switch(pilih){
				switch(pilih){
			case 1:
				en.prima();
				break;
			case 2:
				cin.ignore();
					cout << "Masukkan kata : ";
					cin.getline(chiper,MAKS);
					cout << "Masukkan key : ";
					cin >> key;
					cin.ignore();
				cout << "Setelah di Enkripsi: ";
				en.enkripsi();
				cout << endl;
				en.deskripsi();
				cout << "Kembali di Dekripsi: ";
				en.output();
				break;
			default:
			cout << "Pilihan tidak valid" << endl;
			
		}
		cout << "Ulangi? (y/n) : ";
		cin >> ulang;
		}
	} while ( ulang == 'y' || ulang == 'Y');
	
	return 0;
}
