#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while (i<=n)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i=i+1;
	}
	if (sum==2*n)
	{
		printf("It is a perfect number");
	}
	else
	{
		printf("It is not a perfect number");
	}
}
