#include <iostream>
using namespace std;

//overloading = menimpa

int luas(int panjang, int lebar){
	int luas = panjang*lebar;
	return luas;	
}

int luas(int sisi){
	int luas = sisi*sisi;
	return luas;	
}

double luas(double sisi){
	double luas = sisi*sisi;
	return luas;	
}

int main(){
	double p,l;
	
	cout<<"program Menghitung luas Segi empat dengan tipe data berbeda : \n";
	cout<<"p = 3 & l = 4 luas = "<<luas(3,4)<<"\n";
	cout<<"p = 3 & l = 3 luas = "<<luas(3)<<"\n";
	cout<<"p = 2.5 & l = 2.5 luas = "<<luas(2.5)<<"\n";
	
	cout<<"Masukkan p : "; cin>>p;
	cout<<"Masukkan l : "; cin>>l;	
	
	printf("p = %.1f & l = %.1f luas = ",p,l);
	cout<<luas(p,l)<<"\n";
	
	system("pause");
	return 0;
}
