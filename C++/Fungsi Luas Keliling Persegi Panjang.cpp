#include <iostream>

using namespace std;

int luas(int p, int l){
	int L=p*l;
	return L;
}

int keliling(int p, int l){
	int kll=2*(p+l);
	return kll;
}

void call_luas(int p, int l){
	printf("\nLuas dari persegi panjang dengan panjang %d dan lebar %d adalah : ",p,l);
	cout<<luas(p,l)<<"\n";
}

void call_kll(int p, int l){
	printf("keliling dari persegi panjang dengan panjang %d dan lebar %d adalah : ",p,l);
	cout<<keliling(p,l)<<"\n\n";
}

int main(){
	int panjang,lebar;
	
	printf("Program Mencari Luas Dan Keliling \n");
	printf("Masukkan panjang : ");
	scanf("%d",&panjang);
	
	printf("Masukkan lebar : ");
	scanf("%d",&lebar);
	
	call_luas(panjang,lebar);
	call_kll(panjang,lebar);
	
	system("pause");
	return 0;
}
