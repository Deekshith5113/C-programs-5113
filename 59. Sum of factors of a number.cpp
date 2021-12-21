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
			printf("%d\n",i);
			sum=sum+i;
		}
		i=i+1;
	}
	printf("The sum of the factors is:%d",sum);
}
