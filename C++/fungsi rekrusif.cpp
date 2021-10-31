#include <iostream>
using namespace std;

int pangkat_iterasi(int a, int b){
	int hasil=a;
	for(int i =1; i<b;i++){
		hasil=hasil*a;
	}
	return hasil;
}

int pangkat_rekrusif(int a,int b){
	if(b==1){
		return a;
	}
	else{
	return a*pangkat_rekrusif(a,b-1);	
	}
}

int main(){
	int a,b;
	printf("Program Pangkat Rekrusif ");
	
	printf("Masukkan angka : ");
	scanf("%d",&a);
	printf("Masukkan pangkat : ");
	scanf("%d",&b);
	
	cout<<"Hasil iterasi = "<<pangkat_iterasi(a,b)<<"\n";
	cout<<"Hasil rekrusif = "<<pangkat_rekrusif(a,b)<<"\n";
	
	system("pause");
	return 0;
}
