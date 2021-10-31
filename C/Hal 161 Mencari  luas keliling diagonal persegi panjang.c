#include <stdio.h>
#include <math.h>

int main()
{
	int no,luas,keliling,p,l;
	float diagonal;
	
	printf("Menu Perhitungan Persegi Panjang\n");
	printf("1. Hitung Luas \n");
	printf("2. Hitung Keliling\n");
	printf("3. Hitung Panjang Diagonal\n");
	printf("4. Keluar Program\n");
	
	printf("Masukkan Nomor Pilihan : ");
	scanf("%d",&no);
	
	switch(no){
		case 1:
			printf("Masukkan Panjang : ");
			scanf("%d",&p);
			printf("Masukkan Lebar : ");
			scanf("%d",&l);luas=p*l;
			printf("Luas Persegi panjang anda adalah %d cm^2",luas);
			break;
			
		case 2:
			printf("Masukkan Panjang : ");
			scanf("%d",&p);
			printf("Masukkan Lebar : ");
			scanf("%d",&l);luas=p*l;
			keliling=2*(p+l);
			printf("Keliling Persegi panjang anda adalah %d cm^2",keliling);
			break;
			
		case 3:
			printf("Masukkan Panjang : ");
			scanf("%d",&p);
			printf("Masukkan Lebar : ");
			scanf("%d",&l);luas=p*l;
			diagonal=sqrt(p*p+l*l);
			printf("Diagonal Persegi panjang anda adalah %.1f cm^2",diagonal);
			break;
			
		case 4:
			printf("Keluar Program");
			break;
		default:
			printf("input anda salah");
	}
}
