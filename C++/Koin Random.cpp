#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int a,b,c;
	a=0;
	b=0;
	c=0;
	
	printf("Program Melempar Uang Logam \n\n");
	
	while(true){
		char lanjut;
		int uang;
		
		cout<<"Lempar koin ? [y/n] : ";
		cin>>lanjut;
		
		if(lanjut=='y'){
			c+=1;
			uang=1+rand()%2;
			if(uang==1){
				cout<<"Angka\n\n";
				a+=1;
			}
			else if(uang==2){
				cout<<"Burung\n\n";
				b+=1;
			}
		}
		else if(lanjut=='n'){
			break;
		}
		else{
			cout<<"Masukkan y atau n\n";
		}
	}
	
	printf("\nHasil Acakan Uang Logam \n");
	printf("Banyak kejadian angka adalah : %d kali\n",a);
	printf("Banyak kejadian burung adalah : %d kali\n",b);
	printf("Banyak Percobaan pelemparan Uang logam : %d",c);
	
	cout<<"\nTerima Kasih ~\n\n";
	
	system("pause");
	return 0;
}
