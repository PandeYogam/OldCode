#include<stdio.h>

int faktorial (int n)
{
	if (n<=1)
		return 1;
	else
		return n*faktorial(n-1);
}

int main(int argc, char**argv)
{
	int n;
	printf("masukkan integer :"); 
	scanf ("%d", &n);
	printf("faktorial dari %d adalah %d\n", n, faktorial(n));
	
	return 0;
}
