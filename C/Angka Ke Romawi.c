# include <stdio.h>

int main(){
	int n,a,b,c,d,e;
	
	printf("Mengubah Angka ke Romawi, Jika ingin selesai masukkan -1, -2 untuk bersihkan layar\n");
	printf("Remember itu inget : \n");
	printf("1=I	V=5	X=10	 L=50	      C=100	D=500	    M=1000\n");
	printf("	V^=5000	X^=10000 L^=10000 C^=100000  	D^=500000   M^=1000000\n\n");
	
	do{
		printf("Masukkan Bilangan : ");
		scanf("%d",&n);
		printf("Bilangan Romawinya : ");
		
		//100.000-1.000.000
		if(n>=100000&&n<100000){
			e=n/100000;	
			
			if(e==1){
			printf("C^");
			}
			else if(e==2){
				printf("C^");
			}
			else if(e==3){
				printf("C^C^C^");
			}
			else if(e==4){
				printf("C^D^");
			}
			else if(e==5){
				printf("D^");
			}
			else if(e==6){
				printf("D^C^");
			}
			else if(e==7){
				printf("D^C^C^");
			}
			else if(e==8){
				printf("D^C^C^C^");
			}
			else if(e==9){
				printf("C^M^");
			}
			else if(e==10){
				printf("M^");
			}
			n=n-e*100000;		
		}
	
		//10.000-100000
		if(n>=10000&&n<100000){
			d=n/10000;	
			
			if(d==1){
			printf("X^");
			}
			else if(d==2){
				printf("X^");
			}
			else if(d==3){
				printf("X^X^X^");
			}
			else if(d==4){
				printf("X^L^");
			}
			else if(d==5){
				printf("L^");
			}
			else if(d==6){
				printf("L^X^");
			}
			else if(d==7){
				printf("L^X^X^");
			}
			else if(d==8){
				printf("L^X^X^X^");
			}
			else if(d==9){
				printf("X^C^");
			}
			n=n-d*10000;		
		}
	
		//1000-10000
		if(n>=1000&&n<10000){
			c=n/1000;	
			
			if(c==1){
			printf("M");
			}
			else if(c==2){
				printf("M");
			}
			else if(c==3){
				printf("MMM");
			}
			else if(c==4){
				printf("MV^");
			}
			else if(c==5){
				printf("V^");
			}
			else if(c==6){
				printf("V^M");
			}
			else if(c==7){
				printf("V^MM");
			}
			else if(c==8){
				printf("V^MMM");
			}
			else if(c==9){
				printf("MX^");
			}
			n=n-c*1000;		
		}
		
		//100-1000
		if(n>=100&&n<1000){
			b=n/100;	
			
			if(b==1){
			printf("C");
			}
			else if(b==2){
				printf("CC");
			}
			else if(b==3){
				printf("CCC");
			}
			else if(b==4){
				printf("CD");
			}
			else if(b==5){
				printf("D");
			}
			else if(b==6){
				printf("DC");
			}
			else if(b==7){
				printf("DCC");
			}
			else if(b==8){
				printf("DCCC");
			}
			else if(b==9){
				printf("CM");
			}
			n=n-b*100;		
		}
		
		//10-100
		if(n>=10&&n<100){
			a=n/10;	
			
			if(a==1){
			printf("X");
			}
			else if(a==2){
				printf("XX");
			}
			else if(a==3){
				printf("XXX");
			}
			else if(a==4){
				printf("XL");
			}
			else if(a==5){
				printf("L");
			}
			else if(a==6){
				printf("LX");
			}
			else if(a==7){
				printf("LXX");
			}
			else if(a==8){
				printf("LXXX");
			}
			else if(a==9){
				printf("XC");
			}
			n=n%10;		
		}
		
		//1-10
		if(n<10){
			if(n==1){
			printf("I");
			}
			else if(n==2){
				printf("II");
			}
			else if(n==3){
				printf("III");
			}
			else if(n==4){
				printf("IV");
			}
			else if(n==5){
				printf("V");
			}
			else if(n==6){
				printf("VI");
			}
			else if(n==7){
				printf("VII");
			}
			else if(n==8){
				printf("VIII");
			}
			else if(n==9){
				printf("IX");
			}
		}
		if(n==-2){
			system("cls");
		}
		printf("\n");		
	}
	while(n!=-1);
	
	system("pause");
	return 0;
}
