#include <stdio.h>
#include <conio.h>

int main()
{
	int n,x,y;
	
	printf("masukkan nilai: ");
	scanf("%d",&n);
	printf("\n");	
	
	if(n%2==0){
		printf("Angka yang dimasukkan haruslah Ganjil");
		}
	else{
		for(x=1;x<=n;x++){
		if(x%2==0){
			for( y=1;y<=n;y++){
			if(y%2==0){
				printf("X ");
			}
			else{
				printf("O ");
			}
		}
		}
		else{
			for( y=1;y<=n;y++){
			if(y%2==0){
				printf("O ");
			}
			else{
				printf("X ");
			}
		}
		}
		printf("\n");	
	}
	}	
	return 0;
}
