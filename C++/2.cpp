#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n,x;
	
	printf("Masukkan nilai akar bilangan : ");
	scanf("%d",&n);
	
	x=sqrt(n);
	
	printf("Akar dari %d adalah %d\n",n,x);

	system("pause");
	return 0;
}
