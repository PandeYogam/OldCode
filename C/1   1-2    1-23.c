#include <stdio.h>

int main(void){
	int i,n,a;
	n=0;
	do{
		n=n+1;
		i=0;
		do {
			i=i+1;
			if(i%2==0){
			printf("%d",i);	
			}
			else{
			printf("%d",-i);
			}
		}
		while (i<n);
		printf("\n");
		
	}while (n<6);
	
	printf("\n\n");
	n=0;
	a=0;
	do{
		n=n+1;
		i=0;
		do {
			i=i+1;
			if(a%2==0){
			printf("%d",-i);	
			}
			else{
			printf("%d",i);			
			}
			a+=1;
		}
		while (i<n);
		printf("\n");
		
	}while (n<6);
	
	
	system("pause");
	return 0;
}
