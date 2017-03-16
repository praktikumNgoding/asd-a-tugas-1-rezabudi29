#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
float penjumlahan(int P1[], int P2[], int x){
	float hasil = 0; 
	for(int i=0; i<10; i++){
		hasil += (P1[i] + P2[i])* pow(x,i);
		return hasil;
	}
}

float pengurangan(int P1[], int P2[], int x){
	float hasil= 0;
	for(int i=0; i<10; i++){
		hasil -= (P1[i] - P2[i]) * (float)pow(x,i);
		return hasil;
	}
}

float perkalian(int P1[], int P2[], int x){
	float hasil = 0;
	for(int i =0; i<10;i++){
		for(int j=0; j<10; j++){
			hasil += (P1[i] * P2[j]) * (float)pow(x,(i + j));
			return hasil;
		}
	}
}
 
float turunan(int P1[], int x){
	float hasil= 0;
	for(int i=0; i<10; i++){
		hasil = hasil + P1[i] * i * (float)pow(x,i-1);
		return hasil;
	}
}

int main(){
	int operasi,pil1,pil2,x;
	float hasil,hasil2;
	int P1[10] = {15,0,0,1,0,5,0,8,6,0};
	int P2[10] = {10,0,2,2,3,0,0,4,0,3};
	int P3[10] = {5,0,1,0,0,0,0,0,0,0};
	cout<<"Program Penghitung Polinomial"<<endl<<endl;
	cout<<"================================================="<<endl;
	cout<<"P1: 6x^8 + 8x^7 + 5x^5 + x^3 + 15"<<endl;
	cout<<"P2: 3x^9 + 4x^7 + 3x^4 + 2x^3 + 2x^2 + 10"<<endl;
	cout<<"P3: x^2 + 5"<<endl;
	cout<<"Operasi Hitung: "<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Turunan"<<endl;
	
	do{
		cout<<"Pilih: "; cin>>operasi;
	}while(operasi> 4 || operasi<1);
	do{
		cout<<"Pilih Polinomial Pertama: "; cin>>pil1;
	}while(pil1>3 || pil1<1);
	do{
		cout<<"Pilih Polinomial Kedua: "; cin>>pil2;
	}while(pil2>3 || pil2<1);
	
	if(operasi==1){
		switch(pil1){
			case 1: switch(pil2){
						case 1: hasil= penjumlahan(P1,P1,x);break;
						case 2: hasil= penjumlahan(P1,P2,x);break;
						case 3: hasil= penjumlahan(P1,P3,x);break;
					}break;
					
			case 2: switch(pil2){
						case 1: hasil= penjumlahan(P2,P1,x);break;
						case 2: hasil= penjumlahan(P2,P2,x);break;
						case 3: hasil= penjumlahan(P2,P3,x);break;
					}break;
			case 3: switch(pil2){
						case 1: hasil= penjumlahan(P3,P1,x);break;
						case 2: hasil= penjumlahan(P3,P2,x);break;
						case 3: hasil= penjumlahan(P3,P3,x);break;	
					}break;
		}
	}else if(operasi==2){
		switch(pil1){
			case 1: switch(pil2){
						case 1: hasil= pengurangan(P1,P1,x);break;
						case 2: hasil= pengurangan(P1,P2,x);break;
						case 3: hasil= pengurangan(P1,P3,x);break;
					}break;
			case 2: switch(pil2){
						case 1: hasil= pengurangan(P2,P1,x);break;
						case 2: hasil= pengurangan(P2,P2,x);break;
						case 3: hasil= pengurangan(P2,P3,x);break;
					}break;
			case 3: switch(pil2){
						case 1: hasil= pengurangan(P3,P1,x);break;
						case 2: hasil= pengurangan(P3,P2,x);break;
						case 3: hasil= pengurangan(P3,P3,x);break;
					}break;
		}
	}else if(operasi==3){
		switch(pil1){
			case 1: switch(pil2){
						case 1: hasil= perkalian(P1,P1,x);break;
						case 2: hasil= perkalian(P1,P2,x);break;
						case 3: hasil= perkalian(P1,P3,x);break;
					}break;
			case 2: switch(pil2){
						case 1: hasil= perkalian(P2,P1,x);break;
						case 2: hasil= perkalian(P2,P2,x);break;
						case 3: hasil= perkalian(P2,P3,x);break;
					}break;
			case 3: switch(pil2){
						case 1: hasil= perkalian(P3,P1,x);break;
						case 2: hasil= perkalian(P3,P2,x);break;
						case 3: hasil= perkalian(P3,P3,x);break;
					}break;
		}
	}else if(operasi==4){
		switch(pil1){
			case 1: hasil= turunan(P1,x);break;
			case 2: hasil= turunan(P2,x);break;
			case 3: hasil= turunan(P3,x);break;
		}
		switch(pil2){
			case 1: hasil2= turunan(P1,x);break;
			case 2: hasil2= turunan(P2,x);break;
			case 3: hasil2= turunan(P3,x);break;
		}
	}else{
		cout<<"Program Dihentikan";
	}
	
	if(operasi==4){
		printf("Hasil Perhitungan: %.2f\n",hasil);
		printf("Hasil Perhitungan (Kedua): %.2f",hasil2);
	}else{
		printf("Hasil Perhitungan: %.2f",hasil);
	}
}


