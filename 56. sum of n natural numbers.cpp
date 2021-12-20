//Sum of squares of n natural numbers
#include<stdio.h>
main()
{
	int i=1,n,sum=0,sq=1;
	printf("Enter the upper limit:");
	scanf("%d",&n);
	while (i<=n)
	{
		sq=i*i;
		sum=sum+sq;
		i=i+1;
	}
	printf("The sum of the squares of %d natural numbers is : %d",n,sum);
}
