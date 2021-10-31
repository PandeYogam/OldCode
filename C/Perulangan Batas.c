#include <stdio.h>

main (){
	int x,a;
	
	printf("Masukkan Batas : ");
	scanf("%d",&a);
	
	for(x=1; x<=a; x++){
		printf("%d ",x-1);
		if(x%10==0){
			printf("\n");
		}
	}
	
	x=0;
	printf("%\n\n");
	while(x<=a){
		printf("%d ",x);
		if(a%10==0){
			printf("\n");
		}
		x++;
	}
	return 0;
} 
