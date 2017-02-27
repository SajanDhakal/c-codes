#include<stdio.h>
#include<math.h>
#define pi 3.1416
#define max 180
int main(){
	int angle;
	float x,y;
	printf("Enter a angle" );
	scanf("%d",&angle);
	x=(pi/max)*angle;
	y=cos(x);
	printf("%d %.4f\n",angle,y );
	return 0;
}