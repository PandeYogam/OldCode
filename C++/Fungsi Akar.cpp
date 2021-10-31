#include <iostream>
#include <cmath>

using namespace std;

int pangkat(int n){
	int z;
	z=n*n;
	return z;
}

int akar(int n){
	int x;
	x=sqrt(n);
	return x;
}

int tambah (int a, int b){
	int c;
	c=a+b;
	return c;
} 

void perintah1(){
	printf("Program fungsi akar dan kuadrat \n");
}

void perintah2(){
	int a,b;
	printf("Program fungsi tambah \n");
}

int main()
{
	int n,w,v,a,b;
	float y,x; 
	
	perintah1(); // fungsi void
	
	printf("Masukkan nilai suatu bilangan : ");
	scanf("%d",&n);
	
	y=sqrt(n);
	printf("Akar dari %d adalah %.2f\n\n",n,y); //ini kalimat menggunakan fungsi jadi
	
	x=akar(n);
	
	if(y-x<=0.40){
		x=x;
	}
	else if(y-x==0.50){
		x=x+0.50;
	}
	
	else if(y-x>=0.50){
		x=x+1;
	}
	
	printf("Akar nya mendekati %.1f\n\n",x); //ini kalimat menggunakan fungsi manual 
	
	w=pangkat(n);
	printf("Pangkat nya : %d\n\n",w);
	
	perintah2();
	
	printf("Masukkan bilangan pertama : ");
	scanf("%d",&a);
	
	printf("Masukkan bilangan kedua : ");
	scanf("%d",&b);
	
	v=tambah(a,b);
	printf("hasil pertambahan : %d\n\n",v);
	
	system("pause");
	return 0;
}
