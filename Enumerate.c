#include<stdio.h>

int main()
{
	enum point1{a,b=5,c=5};
	enum point2{d=34,e,f=86};
	enum point3{g=8,h=3,i};
	printf("\n %d %d %d %d %d %d %d %d %d",a,h,f,d,e,b,c,i,g);
	return 0;
}