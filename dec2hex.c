//Decimal to Hexa

#include<stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	hexa(num);
}

void hexa(int num){
	if(num<=0) return;
	hexa(num/16);
	if(num%16<=9) printf("%d",num%16);
	else printf("%c",(num%16)+55);
}


