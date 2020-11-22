#include<stdio.h>

int fun(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return 7+fun(n-1);
	}
}
int main()
{
	int a;
	printf("enter the input number:");
	scanf("%d",&a);
	printf("%d",fun(a));
	return 0;
}