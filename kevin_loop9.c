#include<stdio.h>

main(){
	int i=1;
	int n,fact=1;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	while(i<=n){
		fact*=n;
		n--;
		printf("%d\n",fact);
		}
	
	
}
