
#include<stdio.h>
#include<ctype.h>
int main(){
	char alphabet;
	printf("Enter an alphabet");
	putchar('\n');
	alphabet=getchar();
	if (islower(alphabet)){
		putchar(toupper(alphabet));
		printf("\n");

	}
	else{
		putchar(tolower(alphabet));
		printf("\n");
	}
return 0;
}