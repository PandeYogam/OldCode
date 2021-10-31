#include <iostream>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{
	const int kolom = 3;
	const int baris = 3;

	array < array <int, kolom>, baris> nilaiMD = {1,2,3,4,5,6};

	cout<<nilaiMD[0][0] <<" ";
	cout<<nilaiMD[0][1] <<" ";
	cout<<nilaiMD[0][2] <<" "<<endl;

	cout<<nilaiMD[0][0] <<" ";
	cout<<nilaiMD[0][1] <<" ";
	cout<<nilaiMD[0][2] <<" "<<endl;

	int x;
	cin>>x;

	system("pause");
	return 0;
}
