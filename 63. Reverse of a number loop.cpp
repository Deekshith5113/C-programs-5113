#include<stdio.h>
main()
{
	int x,n,r=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while (n>0)
	{
		x=n%10;
		r=r*10+x;
		n=n/10;
	}
	printf("The reverse of the number is %d",r);
}
