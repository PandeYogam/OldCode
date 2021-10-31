#include <stdio.h>

main (){
	int x;
	
	for(x=1; x<=100; x++){
		printf("%d ",x);
		if(x%10==0){
			printf("\n");
		}
	}
	system("pause");
	return 0;
}
