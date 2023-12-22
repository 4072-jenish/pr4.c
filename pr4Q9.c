#include<stdio.h>
main(){
	int i,j,num=1;
	char a='A';
	for(i=1;i<=5;i++){
	
		for(j=1;j<=i;j++){
			
		if(j%2==0){
			printf("%d",num++);
	}else{
			printf("%c",a++);
		
		}
	}
	printf("\n");
	
}
}


