#include<stdio.h>
int main(){
	int a,reverse=0,r;
	printf("enter a 3 digit number: ");
	scanf("%d",&a);
	while(a!=0){
		r=a%10;
		reverse=reverse*10+r;
		a=a/10;
	}
	printf("%d",reverse);
	return 0;
}
