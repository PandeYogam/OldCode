#include <iostream>
#include <array>

using namespace std;

int main(){
	//membuat array dengan menggunakan standar library
	//array <int, jumlah array> nama array
		
	array <int,5> nilai;

	for(int i=0; i<=4; i++){
		nilai [i]=i;
		printf("nilai [%d] addres nya adalah :",i);
		cout<<&nilai[i]<<"\n";
	}

	printf("\nukuran : ");
	cout<<nilai.size()<<" "<< nilai.begin()<<" "<<nilai.end(); //atau bisa pake cout nilai.size()
	printf("\n");
}