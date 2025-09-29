#include<stdio.h>
int main(){
	int pin=1234,userpin;
	do{
		printf("enter password");
		scanf("%d",&userpin);
	}
	while(pin!=userpin);
	return 0;
}
