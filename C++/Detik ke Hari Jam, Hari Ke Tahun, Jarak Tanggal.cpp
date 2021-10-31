#include <stdio.h>

int main()
{
	//no.1
	
	int s,m,h,d,y,y1,m1,d1,y2,m2,d2,dt;
		
	printf("no.1 Perhitungan detik ke hari, jam, menit, detik \n");
	printf("masukkan banyaknya detik: ");
	scanf("%d",&s);
	
	m=s/60;
	s=s%60;
	
	h=m/60;
	m=m%60;
	
	d=h/24;
	h=h%24;
	
	printf("perhitungan detik akan menjadi %d hari, %d jam, %d menit,%d detik\n\n",d,h,m,s);
	
	//no.2
	
	printf("no.2 Perhitungan hari ke tahun, bulan, hari\n");
	printf("masukkan banyaknya hari: ");
	scanf("%d",&d);
	
	m=d/30;
	d=d%30;
	
	y=m/12;
	m=m%12;
	
	printf("perhitungan hari akan menjadi %d tahun, %d bulan, %d hari",y,m,d);
	

	//no.3
	
	printf("no.3 Perhitungan jarak suatu  tahun, bulan, hari ke suatu  tahun, bulan, hari lainnya \n");
	printf("masukkan banyaknya suatuan  tahun, bulan, hari yang pertama : \n");
	printf("masukkan banyaknya tahun: ");scanf("%d",&y1);
	printf("masukkan banyaknya bulan: ");scanf("%d",&m1);
	printf("masukkan banyaknya hari: ");scanf("%d",&d1);
	
	y1=y1*365;
	m1=m1*30;
	
	d1=d1+m1+y1;
	
	printf("\njumlah hari adalah %d \n\n",d1);
		
	printf("masukkan banyaknya suatuan  tahun, bulan, hari yang kedua : \n");
	printf("masukkan banyaknya tahun: ");scanf("%d",&y2);
	printf("masukkan banyaknya bulan: ");scanf("%d",&m2);
	printf("masukkan banyaknya hari: ");scanf("%d",&d2);
	
	y2=y2*365;
	m2=m2*30;
	
	d2=d2+m2+y2;
	
	printf("\njumlah hari adalah %d \n\n",d2);
	
	dt=d1-d2;
	
	m=dt/30;
	d=dt%30;
	
	y=m/12;
	m=m%12;
	
	printf("jarak tanggal pertama dengan kedua adalah %d hari \ndan perhitungan nya adalah ",dt);
	printf("%d tahun, %d bulan, %d hari",y,m,d);
}
