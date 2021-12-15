#include<stdio.h>
main()
{
	int i=1,s=0,n;
	printf("Enter the number N:");
	scanf("%d",&n);
	while (i<=n)
	{
		s=s+i;
		i=i+1;
	}
	printf("The sum is %d",s);
}
