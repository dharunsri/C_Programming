#include<stdio.h>

int main(){
	char str[1000];
	int i=0,j=0;
	scanf("%[^\n]*c",&str);
	int count = findLength(str);
	
	//storing in new var:
	
	/*char str2[count];
	for(i=count-1,j=0;i>=0,j<count;i--,j++){
		str2[j] = str[i];
	}
	printf("%s",str2);*/
	
	//Without storing anywhere:
	for(i=count-1;i>=0;i--){
		printf("%c",str[i]);
	}
	
	
}

int findLength(char str[]){
	int count=0;
	for(count;str[count]!='\0';++count);
	return count;
}
