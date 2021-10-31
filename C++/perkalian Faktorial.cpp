#include <iostream>

using namespace std;

int main (){
  
  int i,hasil,bil;
  
  cout<<"Masukkan bilangan faktorial :: ";
  cin>>bil;
  
  hasil=1;
  for(i=1;i<=bil;i++)
    {
		hasil=i*hasil;
	}
  cout<<"faktorial dari "<<bil<<" adalah \n"<<hasil;

	system("pause");
	return 0;
}

