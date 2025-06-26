#include<iostream>
using namespace std;

int main(){
	int x,a;
	
	bool isPrime = true;
	cout << "PROGRAM UNTUK MEMERIKA BILANGAN PRIMA" << endl << endl;
	cout << "Masukkan bilangan untuk dicek: ";
	cin >> x;
	
	if ( x < 2 ){
	 isPrime = false;
	}else {
		for( a = 2 ; a <= x / 2; ++a){
			if (x % a == 0){
				isPrime = false;
				break;
			}
		}
	}
	if(isPrime){
		cout << x << " merupakan bilangan prima" << endl;
	} else{
		cout << x << " bukan merupakan bilangan prima" << endl;
	}
	return 0;
}
