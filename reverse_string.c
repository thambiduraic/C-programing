#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char ch[40];
	int i,c=0;
	printf("\n enter charecters:");
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		c++;
	}
	for(i=c;i>=0;i--)
	{
		printf("%c",ch[i]);
	}
	
getch();
}