#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,mul;
	for(i=2;i<=16;i++)
	{
		for(j=1;j<=16;j++)
		{
			mul=i*j;
			printf("\t %d * %d = %d \n",j,i,mul);
		}
	}
getch();
}