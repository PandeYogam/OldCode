#include <stdio.h>

int main()
{
	int i,x,y,z,a,n;
	
	x=1;
	y=1;
	z=2;
	
	scanf("%d", &n);
	
	i=1;
	while(i<=n)
	{
		a=x+y+z;
		printf("%d ",x);
		
		if(i%9!=0)
		{
			x=y;
			y=z;
			z=a;	
		}
		if(i>=10)
		{
			n=n-i;
			i=i-10;
		}	
		i++;
	}	
	return 0;
}
