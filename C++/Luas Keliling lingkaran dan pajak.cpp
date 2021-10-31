#include <iostream>
#include <string>
using namespace std;

int main()
{
	const float pi = 3.14;
	float keliling,luas,r;
	string nama;
	
	cout<<"Hai, senang bertemu dengan mu, siapa nama anda ?\n";
	cout<<"nama : "; 
	cin>>nama;
	cout<<"masukkan jari jari : ";
	cin>>r;
	//luas lingkaran
	luas = pi*r*r;
	cout<<"\nHai, "<<nama<<" luas lingkaran anda adalah "<<luas<<" cm^2 \n";
	/*Keliling lingkaran*/
	keliling=pi*2*r;
	cout<<"dan keliling  lingkaran anda adalah "<<keliling<<" cm^2 \n\n";
	
	//NO 4
	float total,pajak,belanja;
	cout<<"masukkan pajak anda: ";
	cin>>pajak;
	cout<<"Masukkan total belajaan anda : ";
	cin>>belanja;
	
	pajak=pajak/100*belanja;
	total=pajak+belanja;
	
	cout<<"selamat datang di restaurant A "<<nama<<", Harga yang anda bayarkan adalah "<<total
	<<"\nharga ini telah termasuk pajak restaurant";
	
	return 0;	
}
