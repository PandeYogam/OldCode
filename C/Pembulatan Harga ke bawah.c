#include <stdio.h>

int main(){
	// cara membulatkan harga ke nilai pecahan yang ada
	int x,a,b,c;
	
	printf("cara membulatkan harga ke nilai pecahan yang ada\n");
	printf("Masukkann nilai harga: ");
	scanf("%d",&x);
	printf("Pembulatan yang tersedia antara berikut : Rp. 25, 50 dan 100\n");
	
	a=x/25;
	a=a*25;
	
	b=x/50;
	b=b*50;
	
	c=x/100;
	c=c*100;
	//contoh pake 19226, 19499
	printf("%d, %d, %d\n",a,b,c);
	
	if(a<b&&a<c){
		printf("belanja anda adalah : Rp.%d\n",a);
	}
	else if(b<c&&b<a){
		printf("belanja anda adalah : Rp.%d\n",b);
	}
	else{
		printf("belanja anda adalah : Rp.%d\n",c);
	}
	
	system("pause");
	return 0;
}
