#include <stdio.h>

int main(){
	int i,n;
	n=0;
	do{
		n=n+1;
		i=0;
		do {
			i=i+1;
			printf("%d",n);
			printf(" ");
		}
		while (i<n);
		printf("\n");
		
	}while (n<20);
	return 0;
}
