#include <iostream>
using namespace std;

int main()
{
	int i,j,n;
	cin>>n;
	cout<<endl;
	
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			cout<<" ";
		}		
		for(j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
}
