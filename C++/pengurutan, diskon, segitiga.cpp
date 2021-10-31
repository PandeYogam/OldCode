#include <stdio.h>

int main()
{
	//no 1.
	
	int x,bayar,diskon,a,b,c,y,z;
		
	printf("no.1\nmembaca bil.bulat positif lalu menentukan apakah kelipatan 4 atau tidak");
	printf("\nMasukkan bilangan : ");
	scanf("%d",&x);
	
	if(x<0){
		printf("bilangan %d bukan bilangan positif",x);
	}
	else {
		if(x%4==0){
			printf("bilangan %d adalah bilangan kelipatan 4",x);
		}
		else{
			printf("bilangan %d bukan bilangan kelipatan 4",x);
		}
	}
	//no.2
	
	printf("\n\n2. menghintung diskon\n");
	printf("Jika belanja lebih dari 100.000 akan mendapat 5 persen diskon\n");
	printf("masukkan total belanja: ");
	scanf("%d",&x);
	
	if(x>100000){
		diskon=x/100*5;
		bayar=x-diskon;
		printf("anda membayar %d karena telah mendapat potongan harga diskon sebanyak %d",bayar,diskon);
	}
	else{
		printf("anda tidak mendapatkan diskon\n");
	}
	

	//no.3
	
	printf("3.\n \nprogram mengurutkan 3 bilangan dari yang terkecil\n\n");
	printf("masukkan tiga angka acak:\n");	printf("masukkan tiga angka acak:\n");
	printf("program mengurutkan 3 bilangan dari yang terkecil\n\n");
	printf("masukkan a :"); scanf("%d",&a);
	printf("masukkan b :"); scanf("%d",&b);
	printf("masukkan c :"); scanf("%d",&c);
	
	printf("urutannya adalah: " );
	if(a<c&&a<b){
		if(b<c){
			printf("%d, %d, %d",a,b,c);
		}
		else{
			printf("%d, %d, %d",a,c,b);
		}
	}
	else if(b<c&&b<a){
		if(a<c){
			printf("%d, %d, %d",b,a,c);
		}
		else {
			printf("%d, %d, %d",b,c,a);
		}
	}
	else {
		if(a<b){
		printf("%d, %d, %d",c,a,b);
		}
		else{
		printf("%d, %d, %d",c,b,a);
		}
	}
	
	//no.4
	printf("program mengurutkan 3 bilangan dari yang terkecil\n\n");
	printf("masukkan tiga angka acak:\n");
	printf("masukkan a :"); scanf("%d",&a);
	printf("masukkan b :"); scanf("%d",&b);
	printf("masukkan c :"); scanf("%d",&c);
	
	printf("urutannya adalah: " );
	if(a<c&&a<b){
		if(b<c){
			x=a;
			y=b;
			z=c;
		}
		else{
			x=a;
			y=c;
			z=b;
		}
	}
	else if(b<c&&b<a){
		if(a<c){
			x=b;
			y=a;
			z=c;
		}
		else {
			x=b;
			y=c;
			z=a;
		}
	}
	else {
		if(a<b){
			x=c;
			y=a;
			z=b;
		}
		else{
			x=c;
			y=b;
			z=a;
		}
	}
	x=x*x;
	y=y*y;
	z=z*z;
	
	if(z>x+y){
		printf("Segitiga adalah segitiga tumpul");
	}
	else if(z=y+x){
		printf("Segitiga adalah segitiga siku-siku");
	}
	else{
		printf("Segitiga adalah segitiga lancip");
	}
}
