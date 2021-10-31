#include <iostream>

using namespace std;

int main(){
	
	string nama,pass;
	char pande;
	char yogam;
	
	cout<<"Sebutkan Nama : ";
	cin>>nama;
	cout<<"Sebutkan Password : ";
	cin>>pass;
	
	
	if(nama=="pande" ){
		if(pass=="yogam"){
			cout<<"\nSelamat Login berhasil\n\n";
		}
	}
	
	else{
		cout<<"\nMaaf Login Gagal\n\n";
	}
	
	
	system("pause");
	return 0;
}
