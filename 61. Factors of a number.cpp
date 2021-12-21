#include<stdio.h>
main()
{
	int i=1,n,f;
	printf("Enter the number:");
	scanf("%d",&n);
	while (i<=n)
	{
		if (n%i==0)
		{
			printf("%d\n",i);
		}
		i=i+1;
	}
}
