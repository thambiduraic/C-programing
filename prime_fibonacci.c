/*
Consider the below series:

1,2,1,3,2,5,3,7,5,11,8,13,13,17,.....
this series is a mixture of 2 series the 
odd terms in this series form a fibonacci 
series and all of the even terms are the 
prime number in ascending order.

Write a program to find the Nth term in this series.
*/
#include<stdio.h>
#include<math.h>
#define max 99999

void nthfibo(int n)
{
	int a = 0 , b = 1 , next;
	int i;
	for(i=1 ; i<=n ; i++)
	{	
		next = a+b;
		a = b;
		b = next;
	}
printf("\n %ld" , a);
}

void nthprime(int n)
{
	int i , j;
	int upto , isprime;
	int count = 0;
	for(i=2 ; i<=max ; i++)
	{
		//find if the current i value is prime or not
		isprime = 1;
		upto = sqrt(i);
		//printf("\n %d >> %d",i,upto);
		for(j=2 ; j<=upto ; j++)
		{
			// check if it is evenly divisible
			if(i%j == 0)
			{
				isprime = 0;
				break;
			}
		}
		// verify if it is prime or not
		if(isprime == 1)
		{
			count++;
			if(count == n)
			{
				printf("\n %ld" , i);
				break;
			}	
		}
	}
}

void main()
{
	int n;
	printf("\n Enter the Term No You Want? ");
	scanf("%d" , &n);
	if (n%2 == 1)
	{
		nthfibo(n/2 + 1);
	}
	else
	{
		nthprime(n/2);
	}
	
}