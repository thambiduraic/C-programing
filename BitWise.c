#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("\n enter the first value:");
	scanf("%d",&a);
	printf("\n enter the second value:");
	scanf("%d",&b);
	printf("\n %d&%d=%d",a,b,a&b);
	printf("\n %d|%d=%d",a,b,a|b);
	printf("\n %d^%d=%d",a,b,a^b);
	printf("\n %d<<%d=%d",a,b,a<<b);
	printf("\n %d>>%d=%d",a,b,a>>b);
}