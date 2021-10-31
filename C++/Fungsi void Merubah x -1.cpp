#include <stdio.h>

int a;

void rubah(int n){
	a=n*-1;
}

int main(int argc, char const *argv[]){
	int n;
	scanf("%d",&n);
	
	rubah(n);
	printf("Angka akan %d berubah negatif menjadi %d",n,a);
	
	return 0;
}
