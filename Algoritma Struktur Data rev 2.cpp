#include <iostream>
using namespace std;
struct  polinom{
	int bilangan, pangkat;
	char variabel;
};
polinom fungsi1[5], fungsi2[6], fungsi3[2];
polinom penjumlahan[8], perkalian[5*2], turunan[5],pengurangan[8];
int i = 0, ik = 0, ikur = 0;
void fung_p1(){
	fungsi1[0].bilangan = 6;
	fungsi1[0].variabel = 'x';
	fungsi1[0].pangkat = 8;
	fungsi1[1].bilangan = 8;
	fungsi1[1].variabel = 'x';
	fungsi1[1].pangkat = 7;
	fungsi1[2].bilangan = 5;
	fungsi1[2].variabel = 'x';
	fungsi1[2].pangkat = 5;
	fungsi1[3].bilangan = 1;
	fungsi1[3].variabel = 'x';
	fungsi1[3].pangkat = 3;
	fungsi1[4].bilangan = 15;

}
void fung_p2(){
	fungsi2[0].bilangan = 3;
	fungsi2[0].variabel = 'x';
	fungsi2[0].pangkat = 9;
	fungsi2[1].bilangan = 4;
	fungsi2[1].variabel = 'x';
	fungsi2[1].pangkat = 7;
	fungsi2[2].bilangan = 3;
	fungsi2[2].variabel = 'x';
	fungsi2[2].pangkat = 4;
	fungsi2[3].bilangan = 2;
	fungsi2[3].variabel = 'x';
	fungsi2[3].pangkat = 3;
	fungsi2[4].bilangan = 2;
	fungsi2[4].variabel = 'x';
	fungsi2[4].pangkat = 2;
	fungsi2[5].bilangan = 10;
}
void fung_p3(){
	fungsi3[0].bilangan = 1;
	fungsi3[0].variabel = 'x';
	fungsi3[0].pangkat = 2;
	fungsi3[1].bilangan = 5;
}
void pengisian_polinom() {
	fung_p1();
	fung_p2();
	fung_p3();
}
void penjumlahan_fungsi() {
	for (int a = 0; a < sizeof(fungsi1) / sizeof(polinom); a++){
		for (int b = 0; b < sizeof(fungsi2) / sizeof(polinom); b++){
			if (fungsi1[a].pangkat == fungsi2[b].pangkat){
				penjumlahan[i].bilangan = fungsi1[a].bilangan + fungsi2[b].bilangan;
				penjumlahan[i].variabel = fungsi1[a].variabel;
				penjumlahan[i].pangkat = fungsi1[a].pangkat;
				i++;
			}
		}
	}
	for (int a = 0; a < sizeof(fungsi1) / sizeof(polinom); a++){
		if (fungsi1[a].pangkat != penjumlahan[0].pangkat){
			if (fungsi1[a].pangkat != penjumlahan[1].pangkat){
				if (fungsi1[a].pangkat != penjumlahan[2].pangkat){
					penjumlahan[i].bilangan = fungsi1[a].bilangan;
					penjumlahan[i].variabel = fungsi1[a].variabel;
					penjumlahan[i].pangkat = fungsi1[a].pangkat;
					i++;
				}
			}
		}
	}
	for (int a = 0; a < sizeof(fungsi2) / sizeof(polinom); a++){
		if (fungsi2[a].pangkat != penjumlahan[0].pangkat){
			if (fungsi2[a].pangkat != penjumlahan[1].pangkat){
				if (fungsi2[a].pangkat != penjumlahan[2].pangkat){
					penjumlahan[i].bilangan = fungsi2[a].bilangan;
					penjumlahan[i].variabel = fungsi2[a].variabel;
					penjumlahan[i].pangkat = fungsi2[a].pangkat;
					i++;
				}
			}
		}
	}
	for (i = 0; i < sizeof(penjumlahan) / sizeof(polinom); i++){
		cout << penjumlahan[i].bilangan << penjumlahan[i].variabel << penjumlahan[i].pangkat<<endl;
	}
}
void pengurangan_fungsi() {
	for (int a = 0; a < sizeof(fungsi1) / sizeof(polinom); a++){
		for (int b = 0; b < sizeof(fungsi2) / sizeof(polinom); b++){
			if (fungsi1[a].pangkat == fungsi2[b].pangkat){
				pengurangan[ikur].bilangan = fungsi1[a].bilangan - fungsi2[b].bilangan;
				pengurangan[ikur].variabel = fungsi1[a].variabel;
				pengurangan[ikur].pangkat = fungsi1[a].pangkat;
				ikur++;
			}
		}
	}
	for (int a = 0; a < sizeof(fungsi1) / sizeof(polinom); a++){
		if (fungsi1[a].pangkat != pengurangan[0].pangkat){
			if (fungsi1[a].pangkat != pengurangan[1].pangkat){
				if (fungsi1[a].pangkat != penjumlahan[2].pangkat){
					pengurangan[ikur].bilangan = fungsi1[a].bilangan;
					pengurangan[ikur].variabel = fungsi1[a].variabel;
					pengurangan[ikur].pangkat = fungsi1[a].pangkat;
					ikur++;
				}
			}
		}
	}
	for (int a = 0; a < sizeof(fungsi2) / sizeof(polinom); a++){
		if (fungsi2[a].pangkat != pengurangan[0].pangkat){
			if (fungsi2[a].pangkat != penjumlahan[1].pangkat){
				if (fungsi2[a].pangkat != penjumlahan[2].pangkat){
					pengurangan[ikur].bilangan = fungsi2[a].bilangan;
					pengurangan[ikur].bilangan = fungsi2[a].variabel;
					pengurangan[ikur].pangkat = fungsi2[a].pangkat;
					ikur++;
				}
			}
		}
	}
	for (ikur = 0; ikur < sizeof(pengurangan) / sizeof(polinom); ikur++){
		cout << pengurangan[ikur].bilangan << pengurangan[ikur].variabel << pengurangan[ikur].pangkat << endl;
	}
}
void perkalian_fungsi(){
	for (int a = 0; a < sizeof(fungsi1) / sizeof(polinom); a++){
		for (int b = 0; b < sizeof(fungsi3) / sizeof(polinom); b++){
			perkalian[ik].bilangan = fungsi1[a].bilangan * fungsi3[b].bilangan;
			perkalian[ik].variabel = fungsi1[a].variabel;
			perkalian[ik].pangkat = fungsi1[a].pangkat + fungsi3[b].pangkat;
			ik++;
		}
	}
	for (ik = 0; ik < sizeof(perkalian) / sizeof(polinom); ik++){
		if (perkalian[ik].pangkat == 2){
			perkalian[ik].variabel = 'x';
		}
		cout << perkalian[ik].bilangan << perkalian[ik].variabel << perkalian[ik].pangkat << endl;
	}
}
void turunan_fungsi(){
	for (int a = 0; a < sizeof(fungsi2)/sizeof(polinom); a++){
		if (fungsi2[a].pangkat == 0){
			break;
		}
		else{
			turunan[a].bilangan = fungsi2[a].bilangan * fungsi2[a].pangkat;
			turunan[a].variabel = 'x';
			turunan[a].pangkat = fungsi2[a].pangkat - 1;
		}
	}
	for (int a = 0; a < sizeof(turunan) / sizeof(polinom); a++){
		cout << turunan[a].bilangan << turunan[a].variabel << turunan[a].pangkat << endl;
	}
}
int main(){
	pengisian_polinom();
	cout << "PENJUMLAHAN p1 + p2 : " ;
	penjumlahan_fungsi();
	cout << "PENGURANGAN p1 - p2 : " ;
	pengurangan_fungsi();
	cout << "PERKALIAN p1 * p2 : " ;
	perkalian_fungsi();
	cout << "PENURUNAN p2 : " ;
	turunan_fungsi();
	return 0;
}
