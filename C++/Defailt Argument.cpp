#include <iostream>
using namespace std;

double vkubus(double p=1, double l=1, double t=1);

int main(){
	
	printf("%.0f \n",vkubus(2,3,4));
	printf("%.0f \n",vkubus(2,3));
	printf("%.0f \n",vkubus(2));
	printf("%.0f \n",vkubus());
	
	{
		double p,l,t;
		
		printf("Panjang : ");
		cin>>p;
		printf("Lebar : ");
		cin>>l;
		printf("Tnggi : ");
		cin>>t;
		
		printf("Volume Kubus : %.0f \n",vkubus(p,l,t));
	}
	
	system("pause");
	return 0;
}

double vkubus(double p, double l, double t){
	return p*l*t;
}
