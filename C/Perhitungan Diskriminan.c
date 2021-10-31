#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c ;
	float d;
	
	printf("ax^2+bx+c\n");
	
	printf("masukkan a: \n");
	scanf("%d",a);
	printf("masukkan b: \n");
	scanf("%d",b);
	printf("masukkan c: \n");
	scanf("%d",c);
	
	d=b*b-4*a*c;
	
	printf("%f",d);
}
