#include<stdio.h>
main()
{
	int i=1,n,j=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while (i<=n)
	{
		if (n%i==0)
		{
			j=j+1;
		}
		i=i+1;
	}
	if (j==2)
	{
		printf("It is a prime number");
	}
	else
	{
		printf("It is not a prime number");
	}
}
