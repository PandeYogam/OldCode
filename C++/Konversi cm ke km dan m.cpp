#include <iostream>

using namespace std;

int main () {
	
	long double cm,m,km,a,b,c;
	
	cout<<"konversi dari cm ke km,m,cm\n";
	cout<<"masukan nilai cm : ";
	cin>>a;
	
	km=a/100000;
	m=a/100;	
	
	cout<<endl<<endl;
	cout<<"km : "<<km<<"\n\n";
	cout<<"m : "<<m<<"\n\n";
	cout<<"cm : "<<a<<"\n\n";
	
	system("pause");
}
