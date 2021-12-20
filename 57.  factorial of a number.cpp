#include<stdio.h>
main()
{
	int i=1,n,f=1;
	printf("Enter the number:");
	scanf("%d",&n);
	while (i<=n)
	{
		f=f*i;
		i=i+1;
	}
	printf("factorial of %d is %d",n,f);
}
