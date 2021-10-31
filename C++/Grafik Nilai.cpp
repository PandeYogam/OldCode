#include <iostream>

using namespace std;

int main(){
	int nilai[10];
	
	printf("Program menampilkan grafik nilai\n\n");
	
	for(int i=0;i<=9;i++){
		printf("Masukkan mahasiswa dengan nilai ");
		if(i==0){
			printf("0-10  : ");
		}
		else{
			printf("%d-%d : ",i*10+1,(i+1)*10);
		}
		scanf("%d",&nilai[i]);		
	}
	
	printf("\n\nGrafik mahasiswa dengan nilai \n");
	for(int i=0;i<=9;i++){
		if(i==0){
			printf("0-10   : ");
		} 
		else if(i==9){
			printf("%d-%d : ",i*10+1,(i+1)*10);
		}
		else{
			printf("%d-%d  : ",i*10+1,(i+1)*10);
		}
		for(int a=0;a<nilai[i];a++){
			printf("*");
		}	
		printf("\n");
	}
	cin.get(); //bisa pakai system("pause") juga
	return 0;
}
