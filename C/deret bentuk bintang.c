#include <stdio.h>

int main ()
{
	int n,i,j;
	
	scanf("%d",&n);
	
	for(i=1;i<n+1;i++){
		for(j=-3;j<n-i+1;j++){
			printf(" ");
		}
		for(j=i;j>0;j--){
			printf("%d",j);
		}
		for(j=2;j<i+1;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--){
		for(j=n-i+4;j>=1;j--){
			printf(" ");
		}
		for(j=i;j>0;j--){
			printf("%d",j);
		}
		for(j=2;j<i+1;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
