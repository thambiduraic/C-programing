#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,temp,n,k,l,m,a[20];

	printf("\n enter a array size:");
	scanf("%d",&n);

	for(k=0;k<n;k++)
	{
		printf("enter element:");
		scanf("%d",&a[k]);

	}
	printf("\n unsorted array.");
	for(l=0;l<n;l++)
	{
		printf("%d \t",a[l]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n sorted array.");
	for(m=0;m<n;m++)
	{
		printf("%d \t",a[m]);
	}
getch();
}