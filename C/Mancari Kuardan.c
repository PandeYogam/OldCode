#include <stdio.h>
#include <math.h>

int k;

void kuardan1(){
	printf("(x,y)");
}
void kuardan2(){
	printf("(-x,y)");
}
void kuardan3(){
	printf("(-x,-y)");
}
void kuardan4(){
	printf("(x,-y)");
}

void kuardan(int k){
	switch(k){
		case 1:{
			kuardan1();
			break;
		}
		case 2:{
			kuardan2();
			break;
		}
		case 3:{
			kuardan3();
			break;
		}
		case 4:{
			kuardan4();
			break;
		}
	}
}

void hitung(int x, int y){
	if(x>0&&y>0){
		k=1;
	}
	else if(x<0&&y>0){
		k=2;
	}
	else if(x<0&&y<0){
		k=3;
	}
	else if(x>0&&y<0){
		k=4;
	}
}

void jawab(int x,int y,int k){
	printf("Koordinat titik %d %d teletak pada kuardan %d ",x,y,k);
}


int main (){
int x,y;
	printf("Menentukan letak koordinat suatu titik\n");
	printf("Masukkan titik x : ");
	scanf("%d",&x);
	printf("Masukkan titik y : ");
	scanf("%d",&y);
	
	hitung(x,y);
	jawab(x,y,k);
	kuardan(k);
	
	return 0;
}

