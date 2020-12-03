#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],n,i,j,k,l,m,temp;
	printf("\n Enter a array size:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\n enter element:");
		scanf("%d",&a[i]);
	}
	printf("\n Unsorted array:");
	for(j=0;j<n;j++)
	{
		printf("%d \t",a[j]);
	}
	for(k=1;k<n;k++)
	{
		temp=a[k];
		l=k-1;
		while(l>=0 && a[l]>temp)
		{
			a[l+1]=a[l];
			l=l-1;
		}
		a[l+1]=temp;
	}
	printf("\n sorted array:");
	for(m=0;m<n;m++)
	{
		printf("\t %d ",a[m]);
	}
getch();
}