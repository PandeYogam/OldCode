#include <stdio.h>
#include <conio.h>

int main()
{
	int n, i, j, k;
	
	printf("masukkan nilai: ");
	scanf("%d",&n);
	printf("\n");	
	
	for( i=1;i<=n;i++){
		for( j=n;j>=i;j--){
			printf(" ");
			}
			if(i%2==0){
				for( k=1;k<=(2*i-1);k++){
				printf("%d",i);
				}
				printf("\n");
			}
			else{
				for( k=1;k<=(2*i-1);k++){
				printf("*");
				}
				printf("\n");
			}
		}
	
	return 0;
}
