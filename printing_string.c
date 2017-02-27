#include<stdio.h>
#include<string.h>
int main(){
	char adress[80];
	printf("Enter your adress\n");
	scanf("%[^\n]",adress);
	printf("%-80s",adress);
	return 0;
}