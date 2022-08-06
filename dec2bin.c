// Decimal to Binary

#include<stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	binary(num);
}

void binary(int num){
	if(num<=0) return;
	binary(num/2);
	printf("%d",num%2);
}
