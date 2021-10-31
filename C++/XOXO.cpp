#include <iostream>

using namespace std;

int main()
{
	int n;
	
	cin>>n;
	for(int x=1;x<=n;x++){
		if(x%2==0){
			for(int y=1;y<=n;y++){
			if(y%2==0){
				cout<<"X ";
			}
			else{
				cout<<"O ";
			}
		}
		}
		else{
			for(int y=1;y<=n;y++){
			if(y%2==0){
				cout<<"O ";
			}
			else{
				cout<<"X ";
			}
		}
		}
		cout<<endl;		
	}
	return 0;
}
