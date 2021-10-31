#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a,t,L;
	
	printf("Masukkan alas: ");
	scanf("%d",&a);
	
	printf("Masukkan tinggi: ");
	scanf("%d",&t);
	
	L=a*t; //Luas=L
	
	if(L<1){
		printf("Sempit");
	}
	else if (L<2){
		printf("Sedang");
	}
	else {
		printf("Lebar");
	}
	
	system("pause");
	return 0;
}
