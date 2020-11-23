#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int num,i,fact=1;
	printf("enter the input number:");
	scanf("%d",&num);
	num=abs(num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is %d",num,fact);
getch();
}