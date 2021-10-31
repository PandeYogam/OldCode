#include <stdio.h>
int main(hasil)
{
	int b[100];
	int c[100];
	int a ;
	printf("Program perkalian Faktorial\nmasukkan angka faktorial : ");
	scanf("%d",&a );
	
	printf("\nProses Hasil : \n");
	int x=0;
	while (x<a)
	{
		x=x+1;
		b[x]=x;
		hasil=x*hasil;
		c[x]=hasil;
	}
	
	x=0;
	while (x<a)
	{
		x=x+1;
		printf("%d ",b[x]);
	}
	
	printf("\n");
	
	x=0;
	while (x<a)
	{
		x=x+1;
		printf("%d ",c[x]);
	}
	
	printf("hasil %d",hasil);
}
