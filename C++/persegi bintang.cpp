#include<iostream>

//membuat persegi bintang
using namespace std;

int main(){
	int i,j,n;
	
	cout<<"masukkan nilai: ";
	cin>> n;
	
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
