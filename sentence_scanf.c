#include <stdio.h>
#include <string.h>
void main(){
char str[100];
printf("enter string:");
scanf("%[^\n]s",str);
printf("%s\n", str);
}