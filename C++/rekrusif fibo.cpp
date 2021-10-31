#include <iostream>
using namespace std;

int fibo(int n);

int main(){
	int angka;
	char pil;
	
	do{
		cout<<"pmasukkan bilangan : "; cin>>angka;
		cout<<fibo(angka)<<"\n";
		cout<<"Apakah mencari bilangan fibonanci lainnya ?";
		cin>>pil;
	}
	while(pil=='y');
	
	system("pause");
	return 0;
}

int fibo(int n){
	if(n==0||n==1){
		return n;
	}
	else{
		return fibo(n-1)+fibo(n-2);
	}
}
