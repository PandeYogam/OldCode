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
        printf("Bilangan Terbesar adalah Angka Pertama\n",a,b,c);
   
    if (b>a&&b>c)
        printf("Bilangan Terbesar adalah Angka Kedua\n",a,b,c);

    if (c>a&&c>b)
        printf("Bilangan Terbesar adalah Angka Ketiga\n\n\n\n\n\n",a,b,c);
   
    getch();
    return 0;
}
