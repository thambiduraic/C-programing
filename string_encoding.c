/*
 Read a five letter word into the computer then encode the word
 on a letter-by-letter basis by subtracting 30 from the numerical
 value that is used to represent each letter.

 Write out the encoded version of the word.

 Test the program with the following words:white,roses,Japan

 */

#include<stdio.h>
#include<string.h> 

void main()
{
	int i , l;
	char s[10];

	printf("\n Enter a Five letter word : ");
	gets(s);

	l=strlen(s);

	printf("\n");
	for(i=0;i<l;i++)
	{
		printf("%c",s[i]-30);
	}
	printf("\n");
}