/*
problem statement

one programming language has the following keywords that cannot be used as identifiers:

break,case,continue, default,defer,else,for,func,goto
if,map,range,return,struct,type,var.

Write a program to find if the given word is a keyword
or not.
*/

#include<stdio.h>
#include<string.h>

#define kwcount 32

void main()
{
	int i,f=0;
	char keyword[][30] ={"auto", "double", "int", "struct", "break", "else",
						 "long", "switch", "case", "enum", "register", "typedef",
						 "char", "extern", "return", "union", "const", "float", "short",
						 "unsigned", "continue", "for", "signed", "void", "default",
						 "goto", "sizeof", "volatile", "do", "if", "static", "While"};

	char word[20];
	printf("\n Enter Your Word:");
	gets(word);

	for(i=0;i<kwcount;i++)
	{
		//printf("\n %-15s",keyword[i]);
		if(strcmpi(word,keyword[i])==0)
		{
			f=1;
			break;
		}
		/*
		else
		{
			f=0;
		}
		printf(" %s",(f==1?"match":"not match"));
		*/
	}
	if(f)
	{
		printf("\n %s is Keyword \n",word);
	}
	else
	{
		printf("\n %s is Not a Keyword \n",word);
	}

}