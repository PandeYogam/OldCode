#include <iostream>
using namespace std;

int faktorial(int n);

int main(){
	int angka;
	
	cout<<"masukkan bilangan : "; cin>>angka;
	cout<<faktorial(angka)<<"\n";
	
	system("pause");
	return 0;
}

int faktorial(int n){
	if(n==1){
		cout<<n<<"\n";
		return n;
	}
	else{
		cout<<n<<" * ";
		return n*faktorial(n-1);
	}
}
