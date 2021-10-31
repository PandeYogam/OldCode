#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c;
    printf("Perbandingan Tiga Angka\n");
    printf("Masukkan Angka Pertama=");
    scanf("%d",&a);
    printf("Masukkan Angka Kedua=");
    scanf("%d",&b);
    printf("Masukkan Angka Ketiga=");
    scanf("%d",&c);

    if (a>b&&a>c)
    	if (b>c){
			printf("\nBilangan Terbesar Pertama adalah %d ",a);
        	printf("\nBilangan Terbesar kedua adalah %d ",b);
        	printf("\nBilangan Terbesar ketiga adalah %d ",c);
		}
		else {
			printf("\nBilangan Terbesar Pertama adalah %d ",a);
        	printf("\nBilangan Terbesar kedua adalah %d ",c);
        	printf("\nBilangan Terbesar ketiga adalah %d ",b);
		}
        	
   	
    if (b>a&&b>c)
        if (a>c){
        	printf("\nBilangan Terbesar Pertama adalah %d ",b);
        	printf("\nBilangan Terbesar kedua adalah %d ",a);
        	printf("\nBilangan Terbesar ketiga adalah %d ",c);                	
		}
		else {
        	printf("\nBilangan Terbesar Pertama adalah %d ",b);
        	printf("\nBilangan Terbesar kedua adalah %d ",c);
        	printf("\nBilangan Terbesar ketiga adalah %d ",a); 			
		}

    if (c>a&&c>b)
        if (a>b){
        	printf("\nBilangan Terbesar Pertama adalah %d ",c);
        	printf("\nBilangan Terbesar kedua adalah %d ",a);
        	printf("\nBilangan Terbesar ketiga adalah %d ",b);
		}
		else {
			printf("\nBilangan Terbesar Pertama adalah %d ",c);
        	printf("\nBilangan Terbesar kedua adalah %d ",b);
        	printf("\nBilangan Terbesar ketiga adalah %d ",a);
		}
        	   
    getch();
    return 0;
}
