#include<stdio.h>

int main()

{
	int i,j,k,n;
	i=0;
	j=1;
	
	printf ("masukan perulangan :");
	scanf("%d", &n);
	
	
	printf("%d\n", j);
	int a;
	for(a=1; a<=n; a++){
		k = i+j;
		i=j;
		j=k;
	printf("%d\n", k);
	}
	return 0;
}

