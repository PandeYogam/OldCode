#include <stdio.h>

char nama[50], NRP[20];

void input_data()
{
	printf("Nama:");
	scanf("%s", &nama);
	printf("NRP:");
	scanf("%s", &NRP);
}

void cetak_string()
{
	printf("Ini adalah fungsi yang mencetak string \n");
	printf("Silakan masukan data\n");
	input_data();
}

void cetak_data(){
	printf("%s\n%s",nama,NRP);	
}

int main (int argc, char**argv)
{
	cetak_string();
	cetak_data();
	
	return 0;
}
