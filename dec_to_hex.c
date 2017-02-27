#include<stdio.h>
int main(){
	   
   	unsigned int decimalNumber;
   	int i,a[25],c=0;
   	printf("Enter any decimal number: ");
   	scanf("%u",&decimalNumber);
    
    printf("Equivalent hexadecimal number is: %X\n",decimalNumber);
    
    printf("The octal equivalent is %o\n",decimalNumber);
    
    while(decimalNumber>0)
	{
		a[c]=decimalNumber%2;
		decimalNumber=decimalNumber/2;
		c++;
	}
	printf("The binary number is:");
	for(i=c-1;i>=0;i--){
		printf("%d",a[i]);}
		printf("\n");
    
    return 0;
    
}