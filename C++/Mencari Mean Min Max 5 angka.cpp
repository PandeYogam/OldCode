#include <iostream>

using namespace std;

int main(){
	int x,y,b,c,d,e,min,max;
	int a[6],besar[6],kecil[6];
	float ava=0;
	
	//input nilai
	for(x=0;x<5;x++){
		cout<<"Masukkan nilai  : ";
		cin>>a[x];
	}
	
	//avarage
	for(x=0;x<5;x++){
		ava=ava+a[x];
	}
	ava=ava/5;
	
	//min&&max
	for(x=0;x<5;x++){
		if ( x == 1 ) {
             min = a[x];
             max = a[x];
        }
        else if ( min > a[x] ) {
            min = a[x];
        }
        else if ( max < a[x]) {
            max = a[x];
    	}
	}
	
	//menentukan berapa banyak nilai yang ada pada min & max
	b=0,c=0;
	for(x=0;x<5;x++){
		if(a[x]==max){
			besar[b]=x;
			b=b+1;		
		}
		else if(a[x]==min){
			kecil[c]=x;
			c=c+1;		
		}
	}	
	
	cout<<"\navarage dari 5 nilai yang diinputkan adalah = "<<ava;
	
	//tampilan min
	cout<<"\nnilai tekecil pada data terletak di indeks : ";
	for(x=0;x<c;x++){
		cout<<kecil[x]<<" ";
	}
	cout<<" yaitu : "<<min;
	
	//tampilan max
	cout<<"\nnilai terbesar pada data terletak di indeks : ";
	for(x=0;x<b;x++){
		cout<<besar[x]<<" ";
	}
	cout<<" yaitu : "<<max<<"\n";
	
	system("pause");
	return 0;
}
