#include <stdio.h>
#include <math.h>

int main()
{
	int data_size = 11,i;
	int data [12];
	
	printf("Menggunakan Array memasukkan data \n");
	for(i=0;i<12;i++)
	{
		printf("Array data %d : ",i+1);
		scanf("%d",&data[i]);
	}
	
	printf("\n");
	
	i=0;
	while(i<12){
		printf("data %d adalah %d\n",i+1,data[i]);
		i+=1;
	}
}
