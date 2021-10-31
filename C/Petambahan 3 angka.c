#include <stdio.h>

int main()
{	
	int a;
	int b;
	int c;
	int x;
	
	printf("Masukkan 3 angka anda : ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	printf("Total 3 angka : ");
	x= a+b+c;
	printf("%d",x);
	
	system("pause");
	return 0;
}
