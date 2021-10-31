#include <stdio.h>


int main()
{
	int i,j,n;
	
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		if(i==5)
		{
			for(j=1;j<=i;j++)
			{
				if(j==1||j==i)
				{
					printf("1");
				}
				else if(j==3)
				{
					printf("%d",i+1);
				}
				else
				{
					printf("%d",i-1);
				}
			}
			printf("\n");
		}
		else 
		{
			for(j=1;j<=i;j++)
			{
				if(j==1||j==i)
				{
					printf("1");
				}
				else 
				{
					printf("%d",i-1);
				}	
			}
			printf("\n");	
		}
	}	

	return 0;
}
