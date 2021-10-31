#include <iostream>

using namespace std;

int luas(int p, int l);
int keliling(int p, int l);
void hasil(int x);

int main(){
	int panjang,lebar,L,kll;
	
	printf("Program Mencari Luas Dan Keliling \n");
	printf("Masukkan panjang : ");
	scanf("%d",&panjang);
	
	printf("Masukkan lebar : ");
	scanf("%d",&lebar);
	
	printf("\nKeliling : \n");
	kll=keliling(panjang, lebar);
	hasil(kll);
	
	printf("luas : \n");
	L=luas(panjang, lebar);
	hasil(L);
	
	printf("\n");
	system("pause");
	return 0;
}

int luas(int p, int l){
	int L=p*l;
	return L;
}

int keliling(int p, int l){
	int kll=2*(p+l);
	return kll;
}

void hasil(int x){
	printf("hasil : %d \n",x);
}
