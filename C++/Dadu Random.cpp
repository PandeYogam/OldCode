#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	while(true){
		char lanjut;
		
		cout<<"Lempar dadu ? [y/n] :";
		cin>>lanjut;
		
		if(lanjut=='y'){
			cout<<1+rand()%6<<"\n";
			//%6 merupakan batasan angka random dimulai dari 0
			//1+ diisi agar angka 0 tidak termasuk
		}
		else if(lanjut=='n'){
			cout<<"\nTerima Kasih ~\n";
			break;
		}
		else{
			cout<<"Masukkan y atau n";
		}
	}
	
	system("pause");
	return 0;
}
