#include<stdio.h>
#include<conio.h>
#define hours 24
#define minutes 60 
#define seconds 60
void main()
{
	int days,a,b,result;
	printf("\n how many days are convert in seconds:");
	scanf("%d",&days);
	if (days!=0)
	{
		a=days*hours;
		b=a*minutes;
		result=b*seconds;
	}
	printf("%d days are converted in %d seconds",days,result);
getch();
}