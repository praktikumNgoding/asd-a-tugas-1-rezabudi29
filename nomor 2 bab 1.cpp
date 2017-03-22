#include <iostream>
#include <cmath>
using namespace std;
struct bilangan_kompleks{
	int bilangan;
	char karakter;
};
bilangan_kompleks A, B, C, D;
void fungsi_inisialisasi(){
	A.bilangan = 2;
	B.bilangan = 4;
	B.karakter = 'i';
	C.bilangan = 3;
	D.bilangan = 5;
	D.karakter = 'i';
	cout << "A = " << A.bilangan << endl;
	cout << "B = " << B.bilangan << B.karakter << endl;
	cout << "C = " << C.bilangan << endl;
	cout << "D = " << D.bilangan << D.karakter << endl;
}
void fungsi_penambahan(){
	cout << A.bilangan + C.bilangan << " + " << B.bilangan + D.bilangan << D.karakter << endl;
}
void fungsi_pengurangan(){
	cout << A.bilangan - C.bilangan << " + " << B.bilangan - D.bilangan << D.karakter << endl;
}
void fungsi_perkalian(){
	int h1 = (A.bilangan * C.bilangan) - (B.bilangan * D.bilangan);
	int h2 = (A.bilangan * D.bilangan) - (B.bilangan * C.bilangan);
	cout << h1 + h2 << D.karakter << endl;
}
void fungsi_pembagian(){
	int n, m, o, p;
	n = ((A.bilangan * C.bilangan) + (B.bilangan * D.bilangan));
	m = (pow(A.bilangan, 2) + pow(B.bilangan, 2));
	o = ((B.bilangan * C.bilangan) - (A.bilangan * D.bilangan));
	p = (pow(C.bilangan, 2) + pow(D.bilangan, 2));
	cout << ((n / m) + (o / p)) << D.karakter << endl;
}
int main(){
	fungsi_inisialisasi();
	int pilihan;
	do{
		cout << "\nPilih Operasi : " << endl;
		cout << "1. Penjumlahan" << endl;
		cout << "2. Pengurangan" << endl;
		cout << "3. Perkalian" << endl;
		cout << "4. Pembagian" << endl;
		cout << "5. Exit / Keluar" << endl;
		cout << "Pilih Operasi : "; cin >> pilihan;
		if (pilihan == 1){
			fungsi_penambahan();
		}else if (pilihan == 2){
			fungsi_pengurangan();
		}else if (pilihan == 3){
			fungsi_perkalian();
		}else if (pilihan == 4){
			fungsi_pembagian();
		}else if (pilihan == 5){
			break;
		}else{
			cout << "Pilihan hanya 1 - 5" << endl;
		}
	} while (true);
return 0;
}
