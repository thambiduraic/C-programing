#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n,r,temp,cube=0;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;

	while(n>0)
	{
			r=n%10;
			cube=cube+pow(r,3);
			n=n/10;
	}
	n=temp;
	if(cube==n)
	{
		printf("\n %d is an amstrong number.",n);
	}
	else
	{
		printf("%d is not an amstrong number.",n);
	}
getch();
}