#include<stdio.h>
#include<conio.h>
void main()
{
	int num,val,sum=0,rev;
	printf("enter the input number:");
	scanf("%d",&num);
	val=num;
	while(num!=0)
	{
		rev=num%10;
		sum=sum*10+rev;
		num=num/10;
	}
	num=val;
	if(num==sum)
	{
		printf("%d is a palindrome.",num);
	}
	else
	{
		printf("%d is not a palindrome.",num);
	}
getch();
} 