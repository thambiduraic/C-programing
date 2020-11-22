#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,count=0;
	printf("enter the input value:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("%d is a prime number",num);
	}
	else
	{
		printf("%d is not a prime number",num);
	}
}