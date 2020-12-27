#include<stdio.h>
#include<windows.h>

int main()
{
	int h,m,s;
	int d=800;
	printf("\n Set time:\n");
	scanf(" %d%d%d",&h,&m,&s);

	if(h>12 || m>60 || s>60)
	{
		printf("\n ERROR !");
		exit(0);
	}
	while(1)  //infinity loop
	{
		s++;
		if(s>59)
		{
			m++;
			s=0;
		}
		if(m>59)
		{
			h++;
			m=0;
		}
		if(h>12)
		{
			h=1;
		}
		printf("\n Clock:");
		printf("\n %02d:%02d:%02d",h,m,s);
		Sleep(d);//delay time

		system("cls");//clear screen
	}
}