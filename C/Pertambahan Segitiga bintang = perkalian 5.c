#include <stdio.h>

int main()
{
	int i,j,a,n;
	
	scanf("%d", &n);
	
	for(i=0; i<=n; i++)
	{
		for(j=0;j<=i;j++)
		{
			if((j==0)||(j==i))
			{
				a=1;	
			}
			else
			{
				a=a*(i+1-j)/j;
			}
			
			if((a%5)==0)
			{
				printf("* ");	
			}
			else
			{
				printf("%d ",a);
			}
		}
		printf("\n\n");
	}
}
