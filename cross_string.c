#include<stdio.h>
#include<string.h>
void main()
{
	char s[60];
	int i , j , l , index ; 
	int  lspc , inspc , mp=0;

	// only odd values 
	printf("\n Enter a charecter : ");
	gets(s);
	l = strlen(s);
	lspc = 0;
	inspc = l-2;
	printf("\n Length of the string is : %d",l);

	printf("\n");
	// each line i will print.
	for(i=0,j=l-1;i<l;i++,j--)
	{
		// move the corsur to new line
		printf("\n");

		//print left space
		for(index=1;index<=lspc;index++)
		{
			printf(" ");
		}

		//print left charector

		printf(" %c", mp == 0 ? s[i] : s[j]);

		//print inner space

		for(index=1;index<=inspc;index++)
		{
			printf(" ");
		}

		if(i==l/2)
		{
			mp=1;
		}
		else
		//print right charector
		{
			printf("%c ", mp == 0 ? s[j] : s[i]);
		}
		//alter the space
		if(mp==0)
		{
			lspc++;
			inspc-=2;
		}
		else
		{
			lspc--;
			inspc+=2;
		}	
	} 
	printf("\n");

}