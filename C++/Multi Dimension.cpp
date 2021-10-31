#include <iostream>
using namespace std;

int arrayMD[10][10];

void coutarray(int *ptrarray, int baris, int kolom){
	int index=0;
	for(int i=0; i<baris; i++){
		cout<<"[ ";
		for(int j=0;j<kolom;j++){
			cout<<*(ptrarray+index)<<" ";
			index++;
		}
		cout<<"]"<<endl;
	}
}

int main(){
	//array multi dimensi
	// array [baris] [kolom]
	
	const int baris =3;
	const int kolom =3;
	int arrayMD[baris][kolom] = {1,2,3,4};
	
	cout<<arrayMD[0][0]<<" "<<arrayMD[0][1]<<"\n";
	cout<<arrayMD[1][0]<<" "<<arrayMD[1][1]<<"\n\n";
	
	coutarray(*arrayMD, baris, kolom);

	system("pause");
	return 0;
}
