#include <stdio.h>

int main()
{
	float xt,yt,x1,x2,y1,y2;
	
	printf("Masukkan titik 1\n");
	printf("titik x1: ");scanf("%f",&x1);printf("titik y1: ");scanf("%f",&y1);
	printf("\nMasukkan titik 2 \n");
	printf("titik x2: ");scanf("%f",&x2);printf("titik y2: ");scanf("%f",&y2);
	
	xt=(x1+x2)/2;
	yt=(y1+y2)/2;
	
	printf("jadi titik tengah dari titik %.1f,%.1f dan %.1f,%.1f adalah %.1f,%.1f",x1,y1,x2,y2,xt,yt);
	
	return 0;
}
