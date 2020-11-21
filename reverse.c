#include<stdio.h>
#include<conio.h>
void main()
{
	int num,val,sum=0,rev;
	printf("enter numder to find to reverse:");
	scanf("%d",&num);
	val=num;
	while(num!=0)
	{
		rev=num%10;
		sum=sum*10+rev;
		num=num/10;
	}
	printf("reverse of %d is %d",val,sum);
getch();
}