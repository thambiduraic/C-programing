#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,a=0,b=1,c;
	printf("enter the limit:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("\n %d",a);
		c=a+b;
		a=b;
		b=c;
	}
getch();
}