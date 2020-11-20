#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int multiply(int x,int y)
{
	if(y==0)
		return 0;
	if(y>0)
		return(x+multiply(x,y-1));
	if(y<0)
		return(-multiply(x,-y));
}
int divide(int x,int y)
{
	int count=0;
	int sign=((x<0)^(y<0))?-1:1;
	x=abs(x);
	y=abs(y);
	while(x>=y)
	{
		x=x-y;
		count++;
	}
	return sign*count;
}
int main()
{
	int a,b,sum,sub,mul,div;
	printf("\n enter first value:");
	scanf("%d",&a);
	printf("\n enter second value:");
	scanf("%d",&b);
	sum=abs(-a-b);
	sub=a+~b+1;
	mul=multiply(a,b);
	div=divide(a,b);
	printf("\n %d+(%d)=%d",a,b,sum);
	printf("\n %d-(%d)=%d",a,b,sub);
	printf("\n %d*(%d)=%d",a,b,mul);
	printf("\n %d/(%d)=%d",a,b,div);
	getch();
}