#include<stdio.h>

main(){
	int i=2000;
	int n;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	while(i<=n){
		printf("%d\n",i);
		i=i+4;
	}
}
