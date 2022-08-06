// Decimal to Octal

#include<stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	if(num<=7) printf("%d",num);
	else octal(num);
}

void octal(int num){
	if(num<=0) return;
	octal(num/8);
	printf("%d",num%8);
}

