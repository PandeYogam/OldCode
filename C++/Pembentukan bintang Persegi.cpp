#include <stdio.h>
#include <math.h>

int main(){
	
	float x,n;
	int depan, belakang, i, j;
	
	scanf("%f", &x);
	
	n = sqrt (x);
	
	depan = n;
	
	belakang = (n - depan)*100;
	
	if (belakang == 0)
	{
		printf("jumlah kelereng %0.f \n",x);
		printf("Dapat disusun menjadi persegi \n\n");
		
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else 
	{
		printf("Mustahil");
	}
	
}
