#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c ;
	float x1,x2,d;
	
	printf("Program mencari akar akar persamaan");
	printf("Persamaan umum : ax^2+bx+c\n");
	
	printf("masukkan a: \n");scanf("%d",&a);
	printf("masukkan b: \n");scanf("%d",&b);
	printf("masukkan c: \n");scanf("%d",&c);
	
	d=b*b-4*a*c;
	
	if(d<0){
		printf("Akar akar persamaan (%d)x^2+(%d)x+(%d) dalah bilangan imajiner",a,b,c);
	}
	else if (d>0){
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
	}
	else {
		x1=(-b+sqrt(d))/(2*a);
		x2=x1;
	}
	printf("%.1f,%.1f",x1,x2);
}
